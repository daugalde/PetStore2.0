#pragma once
#include <iostream>

using namespace std;

class Store {

private:

	List* invoices;
	List* hotItems;
	BinaryTree* clients;
	BinaryTree* countries;
	BinaryTree* cities;
	BinaryTree* pets;
	BinaryTree* appointments;
	RBTree* treatments;
	BinaryTree* medication;
	List* lastTreatments;
	List* clientWithGreatestInvoices;
	List* contacts;
public:

	Store() {
		invoices = new List();
		hotItems = new List();
		lastTreatments = new List();
		clientWithGreatestInvoices = new List();
		contacts = new List();
	}

	BinaryTree* GetCountries() {
		return this->countries;
	};

	void SetCountries(BinaryTree* countries) {
		this->countries = countries;
	};

	BinaryTree* GetCities() {
		return this->cities;
	};

	void SetCities(BinaryTree* cities) {
		this->cities = cities;
	};

	BinaryTree* GetPets() {
		return this->pets;
	};

	void SetPets(BinaryTree* pets) {
		this->pets = pets;
	};

	BinaryTree* GetAppointments() {
		return this->appointments;
	};

	void SetAppointments(BinaryTree* appointments) {
		this->appointments = appointments;
	};

	RBTree* GetTreatments() {
		return this->treatments;
	};

	void SetTreatments(RBTree* treatments) {
		this->treatments = treatments;
	};

	BinaryTree* GetMedications() {
		return this->medication;
	};

	void SetMedications(BinaryTree* medications) {
		this->medication = medications;
	};

	List* getInvoices() {
		return invoices;
	};

	void setInvoices(List* invoices) {
		this->invoices = invoices;
	};

	List* getClientWithGreatestInvoices() {
		return clientWithGreatestInvoices;
	};

	void setClientWithGreatestInvoices(List* cgi) {
		this->clientWithGreatestInvoices = cgi;
	};

	List* getLastTreatments() {
		return lastTreatments;
	};

	void setLastTreatments(List* lastTreatments) {
		this->lastTreatments = lastTreatments;
	};

	List* getHotItems() {
		return hotItems;
	};

	void setHotItems(List* hotItems) {
		this->hotItems = hotItems;
	};

	List* getContacts() {
		return contacts;
	};

	void setContacts(List* contacts) {
		this->contacts = contacts;
	};

	BinaryTree* GetClients() {
		return clients;
	};

	void SetClients(BinaryTree* clients) {
		this->clients = clients;
	};

	friend class List;
	friend class BinaryTree;
	friend class FileLoader;
};