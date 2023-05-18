#pragma once
#include <iostream>
#include "Object.h"
using namespace std;

class Country : public Object {


public:

	Country() {

	}

	Country(int id, string name) : Object(id, name) {
	}

	string ToString() {
		string result = "";
		result.append(to_string(this->getId()) + "\t" + this->getName() + "\r\n");
		return result;
	}

	friend class Places;
};

