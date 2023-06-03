#pragma once
#include <iostream>
#include <string>
using namespace std;

class Object {

private:
	int id;
	string name;
	int visits = 0;
	bool isDelete = false;
	int count = 0;
public:

	Object() {
		this->id = 0;
		this->name = "";
		this->isDelete = false;
	}

	Object(int id, string name) {
		this->id = id;
		this->name = name;
		this->isDelete = false;
	}

	int getId() {
		return this->id;
	};

	void setId(int id) {
		this->id = id;
	};

	string getName() {
		return this->name;
	};

	void setName(string name) {
		this->name = name;
	};

	int getVisits() {
		return visits;
	};

	void setVisits(int visits) {
		this->visits = visits;
	};

	int getCount() {
		return count;
	};

	void setCount(int count) {
		this->count = count;
	};

	bool getIsDeleted() {
		return this->isDelete;
	};

	void setIsDeleted(bool isDeleted) {
		this->isDelete = isDeleted;
	};

	friend class Node;
	friend class List;
	friend class Places;
	friend class Appointment;
};
