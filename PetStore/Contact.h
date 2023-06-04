#pragma once
#include <iostream>
#include "Object.h"
using namespace std;

class Contact : public Object {

private:
	int countryId;

public:

	Contact() {

	}

	Contact(int id, string name) : Object(id, name) {
	}

	string ToString() {
		string result = "";
		result.append(to_string(this->getId()) + "\t" + this->getName() + "\r\n");
		return result;
	}

};

