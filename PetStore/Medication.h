#pragma once
#include <iostream>
#include "Object.h"
#include "List.h"

using namespace std;

class Medication : public Object {

private:
	
	int petId;
	int quantity;
	List* treatmentId;
	float unitPrice;
	int lastVisitDay;
	int lastVisitMonth;
	int lastVisitYear;
	float totalPrice;

public:

	Medication() {
		this->petId = 0;
		this->lastVisitDay = 0;
		this->lastVisitMonth = 0;
		this->lastVisitYear = 0;
		this->treatmentId = new List();
		this->unitPrice = 0.00;
		this->quantity = 0;
		this->totalPrice = 0.00;
	}

	Medication(int id, string name, int petId, int lastVisitDay, int lastVisitMonth, int lastVisitYear, List* treatmentId, float unitPrice, int quantity, float totalPrice) : Object(id, name) {
		this->petId = petId;
		this->lastVisitDay = lastVisitDay;
		this->lastVisitMonth = lastVisitMonth;
		this->lastVisitYear = lastVisitYear;
		this->treatmentId = treatmentId;
		this->unitPrice = unitPrice;
		this->quantity = quantity;
		this->totalPrice = totalPrice;
	}

	Medication(int id, string name, int petId, int lastVisitDay, int lastVisitMonth, int lastVisitYear, List* treatmentId, float totalPrice) : Object(id, name) {
		this->petId = petId;
		this->lastVisitDay = lastVisitDay;
		this->lastVisitMonth = lastVisitMonth;
		this->lastVisitYear = lastVisitYear;
		this->treatmentId = treatmentId;
		this->quantity = quantity;
		this->totalPrice = totalPrice;
	}

	int getPetId() {
		return this->petId;
	};

	void setPetId(int petId) {
		this->petId = petId;
	};

	int getLastVisitDay() {
		return this->lastVisitDay;
	};

	void setLastVisitDay(int lastVisitDay) {
		this->lastVisitDay = lastVisitDay;
	};
	int getLastVisitMonth() {
		return this->lastVisitMonth;
	};

	void setLastVisitMonth(int lastVisitMonth) {
		this->lastVisitMonth = lastVisitMonth;
	};

	int getLastVisitYear() {
		return this->lastVisitYear;
	};

	void setLastVisitYear(int lastVisitYear) {
		this->lastVisitYear = lastVisitYear;
	};

	List* getTreatmentId() {
		return this->treatmentId;
	};

	void setTreatmentId(List* treatmentId) {
		this->treatmentId = treatmentId;
	};

	int getQuantity() {
		return this->quantity;
	};

	void setQuantity(int quantity) {
		this->quantity = quantity;
	};

	float getUnitPrice() {
		return this->unitPrice;
	};

	void setUnitPrice(float unitPrice) {
		this->unitPrice = unitPrice;
	};

	float getTotalPrice() {
		return this->totalPrice;
	};

	void setTotalPrice(float totalPrice) {
		this->totalPrice = totalPrice;
	};

	string getFormattedLastVisitDate() {
		return to_string(this->getLastVisitYear()) + "-" + to_string(this->getLastVisitMonth()) + "-" + to_string(this->getLastVisitDay());
	}

	string ToString() {
		string result = "";

		string formattedUnitPriceString = std::to_string(this->getUnitPrice());
		size_t decimalPos = formattedUnitPriceString.find('.');
		if (decimalPos != string::npos && decimalPos + 3 < formattedUnitPriceString.length()) {
			formattedUnitPriceString = formattedUnitPriceString.substr(0, decimalPos + 3);
		}

		string formattedBalanceString = std::to_string(this->getTotalPrice());
		size_t decimalPos1 = formattedBalanceString.find('.');
		if (decimalPos1 != string::npos && decimalPos1 + 3 < formattedBalanceString.length()) {
			formattedBalanceString = formattedBalanceString.substr(0, decimalPos1 + 3);
		}
		result.append("\r\nId Medicacion :\t" + to_string(this->getId()) + "\r\n" +
			//"Cantidad Items: \t" + to_string(this->getQuantity()) + "\r\n" +
			"Ultima Visita: \t" + to_string(this->getLastVisitDay()) + "/" + to_string(this->getLastVisitMonth()) + "/" + to_string(this->getLastVisitYear()) + "\r\n" +
			//"Precio Unitario: \t" + formattedUnitPriceString + "\r\n" +
			this->getTreatmentId()->ToString("prescribedTreatment") +
			"Total Debido: \t" + formattedBalanceString + "\r\n" +
			"\r\n");
		return result;
	}

	friend class List;
};
