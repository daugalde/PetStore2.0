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

public:

	Invoice() {
		this->setIsDeleted(true);
		this->client = NULL;
		this->pet = NULL;
		this->appointment = NULL;
	}

	Invoice(int id, Client* client, Pet* pet, Appointment* appointment) : Object(id, "Factura " + to_string(id)) {
		this->setIsDeleted(true);
		this->client = client;
		this->pet = pet;
		this->appointment = appointment;
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
			   (this->client != NULL && this->appointment != NULL && this->pet != NULL && medication != NULL);
	}

	bool canEmitInvoice() {
		return this->client != NULL && this->appointment != NULL && this->pet != NULL && medication != NULL;
	}
	/*float getPrice() {
		return this->price;
	};

	void setPrice(float price) {
		this->price = price;
	};

	int getStockQuantity() {
		return this->qty;
	};

	void setStockQuantity(int qty) {
		this->qty = qty;
	};*/

	void conciliateData() {
		if (canEmitInvoice())
		{
			this->getClient()->setDay(this->getAppointment()->getDay());
			this->getClient()->setMonth(this->getAppointment()->getMonth());
			this->getClient()->setYear(this->getAppointment()->getYear());
			this->getMedication()->setLastVisitDay(stoi(this->getAppointment()->getDay()));
			this->getMedication()->setLastVisitMonth(stoi(this->getAppointment()->getMonth()));
			this->getMedication()->setLastVisitYear(stoi(this->getAppointment()->getYear()));
			this->getPet()->setLastVisitDay((this->getAppointment()->getDay()));
			this->getPet()->setLastVisitMonth((this->getAppointment()->getMonth()));
			this->getPet()->setLastVisitYear((this->getAppointment()->getYear()));
			this->getClient()->setTotalInvoiced(this->medication->getTotalPrice());
			this->getAppointment()->setTotalInvoiced(this->medication->getTotalPrice());
		}
	}

	string ToString() {
		/*string result = "";
		string formattedBalanceString = std::to_string(this->getPrice());
		size_t decimalPos = formattedBalanceString.find('.');
		if (decimalPos != string::npos && decimalPos + 3 < formattedBalanceString.length()) {
			formattedBalanceString = formattedBalanceString.substr(0, decimalPos + 3);
		}
		result.append("\r\nId Tratamiento :\t" + to_string(this->getId()) + "\r\n" +
			"Nombre Tratamiento :\t" + this->getName() + "\r\n" +
			"Cantidad Disponible Stock :\t" + to_string(this->getStockQuantity()) + "\r\n" +
			"Precio Unitario: \t" + formattedBalanceString + "\r\n" +
			"\r\n");*/
		if (isValidToCreateInvoice())
		{
			return "";
		}
		return "Cliente :\r\n" + client->ToString() + "\r\nMascota:\r\n" + pet->ToString() + "\r\n con Vista \r\n" + appointment->ToString() + "\r\nSe le envio la Medicacion\r\n" + medication->ToString();
	}

	friend class List;
	friend class AppointmentManagement;
	friend class MedicationManagement;
};
