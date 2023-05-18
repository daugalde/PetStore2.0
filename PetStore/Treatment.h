#pragma once
#include <iostream>
#include "Object.h"
using namespace std;

class Treatment : public Object {

private:

	float price;
	int qty;

public:

	Treatment() {
		price = 0.0;
		qty = 0;
	}

	Treatment(int id, string name, float price, int qty) : Object(id, name) {
		this->price = price;
		this->qty = qty;
	}

	float getPrice() {
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
	};

	string ToString() {
		string result = "";
		string formattedBalanceString = std::to_string(this->getPrice());
		size_t decimalPos = formattedBalanceString.find('.');
		if (decimalPos != string::npos && decimalPos + 3 < formattedBalanceString.length()) {
			formattedBalanceString = formattedBalanceString.substr(0, decimalPos + 3);
		}
		result.append("\r\nId Tratamiento :\t" + to_string(this->getId()) + "\r\n" +
			"Nombre Tratamiento :\t" + this->getName() + "\r\n" +
			"Cantidad Disponible Stock :\t" + to_string(this->getStockQuantity()) + "\r\n" +
			"Precio Unitario: \t" + formattedBalanceString + "\r\n" +
			"\r\n");
		return result;
	}

	friend class List;
};
