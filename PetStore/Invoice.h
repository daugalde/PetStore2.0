#pragma once
#include <iostream>
#include "Object.h"
#include "Client.h"
using namespace std;

class Invoice : public Object {

private:
	Client* client;

public:

	Invoice() {
		this->client = new Client();
	}

	Invoice(int id, string name, float price, int qty) : Object(id, name) {
		/*this->price = price;
		this->qty = qty;*/
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
		return client->ToString();
	}

	friend class List;
};
