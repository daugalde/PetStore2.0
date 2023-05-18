#pragma once
#include <iostream>
#include "Object.h"
using namespace std;

class City : public Object {

private:
	int countryId;

public:

	City() {

	}

	City(int id, string name) : Object(id, name) {
	}

	int getCountryId() {
		return countryId;
	};

	void setCountryId(int countryId) {
		this->countryId = countryId;
	};

	string ToString() {
		string result = "";
		result.append(to_string(this->getId()) + "\t" + this->getName() + "\r\n");
		return result;
	}

	friend class Places;
};

