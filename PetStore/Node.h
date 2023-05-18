#pragma once
#include <iostream>
#include <string>
#include "Object.h"
using namespace std;
class Node {

private:
	Object* value ;
	Node* NextNode;
	Node* PrevioustNode;

public:  // Constructors

	Node(Object* v)
	{
		value = v;
		NextNode = NULL;
	}

	Node(Object* v, Node* newNextNode)
	{
		value = v;
		NextNode = newNextNode;
	}

	Node* GetNextNode() {
		return this->NextNode;
	}

	Object* GetObj() {
		return this->value;
	}

	friend class Queue;
	friend class List;
	friend class Object;
	friend class Places;
	friend class MedicationManagement;
};
typedef Node* PointerNode; //Alias