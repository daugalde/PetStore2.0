#pragma once
#include <iostream>
#include "Object.h"
#include "Client.h"
#include "Pet.h"
#include "Appointment.h"
#include "Medication.h"
using namespace std;

class Invoice : public Object {

private:
	Client* client;
	Pet* pet;
	Appointment* appointment;
	Medication* medication;
	bool hasDiscount = false;
	bool isSetDiscount = false;

public:

	Invoice() {
		this->setIsDeleted(true);
		this->client = NULL;
		this->pet = NULL;
		this->appointment = NULL;
		this->medication = NULL;
	}

	Invoice(int id, Client* client, Pet* pet, Appointment* appointment) : Object(id, "Factura " + to_string(id)) {
		this->setIsDeleted(true);
		this->client = client;
		this->pet = pet;
		this->appointment = appointment;
		this->medication = NULL;
		/*this->price = price;
		this->qty = qty;*/
	}

	Pet* getPet() {
		return this->pet;
	}

	void setPet(Pet* pet) {
		this->pet = pet;
	}

	Client* getClient() {
		return this->client;
	}

	void setClient(Client* client) {
		this->client = client;
	}

	Appointment* getAppointment() {
		return this->appointment;
	}

	void setAppointment(Appointment* appointment) {
		this->appointment = appointment;
	}

	Medication* getMedication() {
		return this->medication;
	}

	void setMedication(Medication* medication) {
		this->medication = medication;
	}

	bool isValidToCreateInvoice() {
		return this->client == NULL && this->appointment == NULL && this->pet == NULL && medication == NULL;
	}

	bool isPartialInvoice() {
		return (this->client != NULL || this->appointment != NULL || this->pet != NULL || medication != NULL) && 
			   !(this->client != NULL && this->appointment != NULL && this->pet != NULL && medication != NULL);
	}

	bool canEmitInvoice() {
		return this->client != NULL && this->appointment != NULL && this->pet != NULL && medication != NULL;
	}
	float getDiscountPrice() {

		float discountAdded = 0.0;

		if (!isSetDiscount && appointment->getPaymentType() == 1) {
			if (this->medication->getTotalPrice() < 100000)
			{
				discountAdded = (float)(this->medication->getTotalPrice() * 1.03);

				this->medication->setTotalPrice(this->medication->getTotalPrice() / 1.03);
				
				client->setDiscount(discountAdded);

				hasDiscount = true;
			}
			else if (this->medication->getTotalPrice() == 100000)
			{
				discountAdded = (float)(this->medication->getTotalPrice() * 1.05);

				this->medication->setTotalPrice(this->medication->getTotalPrice() / 1.05);

				client->setDiscount(discountAdded);

				hasDiscount = true;
			}
			else if (this->medication->getTotalPrice() >= 101000 && this->medication->getTotalPrice() <= 150000)
			{
				discountAdded = (float)(this->medication->getTotalPrice() * 1.10);

				this->medication->setTotalPrice(this->medication->getTotalPrice() / 1.10);

				client->setDiscount(discountAdded);

				hasDiscount = true;
			}

			isSetDiscount = true;
		}
		
		return this->medication->getTotalPrice();
	}

	void conciliateData() {
		try
		{
			if (canEmitInvoice())
			{
				getDiscountPrice();
				this->getClient()->setDay(this->getAppointment()->getDay());
				this->getClient()->setMonth(this->getAppointment()->getMonth());
				this->getClient()->setYear(this->getAppointment()->getYear());
				this->getMedication()->setLastVisitDay(stoi(this->getAppointment()->getDay()));
				this->getMedication()->setLastVisitMonth(stoi(this->getAppointment()->getMonth()));
				this->getMedication()->setLastVisitYear(stoi(this->getAppointment()->getYear()));
				this->getPet()->setLastVisitDay((this->getAppointment()->getDay()));
				this->getPet()->setLastVisitMonth((this->getAppointment()->getMonth()));
				this->getPet()->setLastVisitYear((this->getAppointment()->getYear()));
				this->getClient()->setBalance(this->medication->getTotalPrice());
				this->getAppointment()->setTotalInvoiced(this->medication->getTotalPrice());
				if (this->getAppointment()->getPaymentType() == 2)
				{
					client->setTotalDue(this->medication->getTotalPrice());
					
				}
			}
		}
		catch (...)
		{
				
		}
		
	}

	string ToString() {

		string result =  "Factura :\t" + to_string(this->getId()) + "\r\n" +
			"Cliente :\r\n" + client->ToString() +
			"\r\nMascota:\r\n" + pet->ToString() +
			"\r\n con Vista \r\n" + appointment->ToString() +
			"\r\nSe le envio la Medicacion\r\n" + medication->ToString();
		if (hasDiscount)
		{
			result.append("\r\nTiene Descuento Aplicado \r\n");
		}
		return result;
	}

	friend class List;
	friend class AppointmentManagement;
	friend class MedicationManagement;
};
