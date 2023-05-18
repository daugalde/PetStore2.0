#pragma once
#include <iostream>
#include "Object.h"
using namespace std;

class PrescribedTreatment : public Object {

private:

	float price;
	int qty;
	float totalPrice;
public:

	PrescribedTreatment() {
		price = 0.0;
		qty = 0;
	}

	PrescribedTreatment(int id, string name, float price, int qty, float totalPrice) : Object(id, name) {
		this->price = price;
		this->qty = qty;
		this->totalPrice = totalPrice;
	}

	float getPrice() {
		return this->price;
	};

	void setPrice(float price) {
		this->price = price;
	};

	int getQuantity() {
		return this->qty;
	};

	void setQuantity(int qty) {
		this->qty = qty;
	};

	float getTotalPrice() {
		return this->totalPrice;
	};

	void setTotalPrice(float totalPrice) {
		this->totalPrice = totalPrice;
	};

	string ToString() {
		string result = "";
		string formattedPriceString = std::to_string(this->getPrice());
		size_t decimalPos = formattedPriceString.find('.');
		if (decimalPos != string::npos && decimalPos + 3 < formattedPriceString.length()) {
			formattedPriceString = formattedPriceString.substr(0, decimalPos + 3);
		}
		
		result.append("\r\nId Tratamiento :\t" + to_string(this->getId()) + "\r\n" +
			"Nombre Tratamiento :\t" + this->getName() + "\r\n" +
			"Cantidad Prescrita :\t" + to_string(this->getQuantity()) + "\r\n" +
			"Precio Unitario: \t" + formattedPriceString + "\r\n" +
			"\r\n");
		return result;
	}

	friend class List;
};
