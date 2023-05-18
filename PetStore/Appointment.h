#pragma once
#include <iostream>
#include <string>

using namespace std;

class Appointment : public Object {

private:
	int petId = 0;
	string day = "";
	string month = "";
	string year = "";
	float invoices = 0;
	float totalInvoiced = 0.0;
	int paymentType = 0;

public:  // Constructors

	Appointment() {}

	Appointment(int id, string name, int petId, string day, string month, string year, int paymentType, float invoices, float totalInvoiced) : Object(id, name)
	{
		this->petId = petId;
		this->day = day;
		this->month = month;
		this->year = year;
		this->paymentType = paymentType;
		this->invoices = invoices;
		this->totalInvoiced = totalInvoiced;
	}

	int getPetId() {
		return this->petId;
	};

	void setPetId(int petId) {
		this->petId = petId;
	};

	string getDay() {
		return this->day;
	};

	void setDay(string day) {
		this->day = day;
	};

	string getMonth() {
		return this->month;
	};

	void setMonth(string month) {
		this->month = month;
	};

	string getYear() {
		return this->year;
	};

	void setYear(string year) {
		this->year = year;
	};

	int getPaymentType() {
		return this->paymentType;
	};

	void setPaymentType(int paymentType) {
		this->paymentType = paymentType;
	};

	float getInvoices() {
		return this->invoices;
	}

	void setInvoices(float invoices) {
		this->invoices = invoices;
	}

	float getTotalInvoiced() {
		return this->totalInvoiced;
	}

	void setTotalInvoiced(float totalInvoiced) {
		this->totalInvoiced = totalInvoiced;
	}

	string ToString() {
		string result = "";
		string formattedBalanceString = std::to_string(this->getTotalInvoiced());
		size_t decimalPos = formattedBalanceString.find('.');
		if (decimalPos != string::npos && decimalPos + 3 < formattedBalanceString.length()) {
			formattedBalanceString = formattedBalanceString.substr(0, decimalPos + 3);
		}
		result.append("\r\nId Visita :               " + to_string(this->getId()) + "\r\n" +
			"Fecha Ultima Visita: " + this->getDay() + "/" + this->getMonth() + "/" + this->getYear() + "\r\n" +
			"Tipo Pago:             " + (this->getPaymentType() == 1 ? "Contado" : "Credito") + "\r\n"+
			"Total:                     " + formattedBalanceString + "\r\n");
		return result;
	}

	friend class List;
};