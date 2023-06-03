#pragma once
#include <iostream>
#include <string>
#include "Menu.h"
#include "List.h"
using namespace std;

class Client : public Object {

private:
	int countryId = 0;
	int cityId = 0;
	string phone = "";
	string address = "";
	string day = "";
	string month = "";
	string year = "";
	List* groceryItems;
	float invoices = 0;
	float totalInvoiced = 0.0;
	int discount = 0;
	float balance = 0.0;
	float totalDiscounted = 0.0;
	float totalDue = 0.0;

public:  // Constructors

	Client() {}

	Client(int id, string name, string address, int countryId, int cityId ,string clientPhone , string day, string month, string year, int discount, float balance): Object(id, name)
	{
		this->address = address;
		this->phone = clientPhone;
		this->countryId = countryId;
		this->cityId = cityId;
		this->day = day;
		this->month = month;
		this->year = year;
		this->discount = discount;
		this->balance = balance;
	}

	string getPhone() {
		return this->phone;
	};

	void setPhone(string phone) {
		this->phone = phone;
	};

	string getAddress() {
		return this->address;
	};

	void setAddress(string address) {
		this->address = address;
	};

	int getCountryId() {
		return this->countryId;
	};

	void setCountryId(int countryId) {
		this->countryId = countryId;
	};

	int getCityId() {
		return this->cityId;
	};

	void setCityId(int cityId) {
		this->cityId = cityId;
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

	void setMonth(string month){
		this->month = month;
	};

	string getYear() {
		return this->year;
	};

	void setYear(string year) {
		this->year = year;
	};

	int getDiscount() {
		return this->discount;
	};

	void setDiscount(int discount) {
		this->discount = discount;
	};

	float getBalance() {
		return this->balance;
	};

	void setBalance(float balance) {
		this->balance = balance;
	};

	float getTotalDiscounted() {
		return this->totalDiscounted;
	};

	void setTotalDiscounted(float totalDiscounted) {
		this->totalDiscounted = totalDiscounted;
	};

	float getTotalDue() {
		return this->totalDue;
	};

	void setTotalDue(float totalDue) {
		this->totalDue = totalDue;
	};

	List* getGroceryItems() {
		return this->groceryItems;
	}

	void setGroceryItems(List* groceryItems) {
		this->groceryItems = groceryItems;
	}

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

	void BuyProducts(List* groceryItems) {

		string selectedAsileId;

		string selectedProductId;

		string selectedProductMakeId;

		string selectedProductQuantity;

		

	}

	string ToString() {
		string result = "";
		string formattedBalanceString = std::to_string(this->getBalance());
		size_t decimalPos = formattedBalanceString.find('.');
		if (decimalPos != string::npos && decimalPos + 3 < formattedBalanceString.length()) {
			formattedBalanceString = formattedBalanceString.substr(0, decimalPos + 3);
		}
		result.append( "\r\nId Cliente :\t" + to_string(this->getId()) + "\r\n" +
			           "Nombre Cliente :\t" + this->getName() + "\r\n" +
			           "Codigo Pais :\t" + to_string(this->getCountryId()) + "\r\n" +
			           "Codigo Ciudad :\t" + to_string(this->getCityId()) + "\r\n" +
			           "Direccion : \t" + this->getAddress() + "\r\n" +
					   "Ultima Visita: \t" + this->getDay() + "/" + this->getMonth() + "/" + this->getYear() + "\r\n" +
					   "Telefono: \t" + this->getPhone() + "\r\n" +
			           "Descuento: \t" + to_string(this->getDiscount()) + "\r\n" +
			           "Total Debido: \t" + formattedBalanceString + "\r\n" +
			           "\r\n");
		return result;
	}

	friend class List;
	//friend class FileLoader;
};