#pragma once
#include <iostream>
#include <string>
#include "TreeNode.h"
#include <fstream> 
#include "Object.h"
#include "Pet.h"
#include "Appointment.h"
#include "Medication.h"
#include "Invoice.h"
#include "City.h"
#include <vector>

using namespace std;

class BinaryTree {

private:
	TreePointerNode root;
	bool InsertNode(Object* obj, TreePointerNode node);
	//Insert AVL
	TreePointerNode InsertBalancedNode(Object*, TreePointerNode node, bool &Hh);

	void PreOrder(TreeNode*, string type, string& result);

	void PostOrder(TreeNode*, string type, string& result);

	void InOrder(TreeNode*, string type, string& result);

	void SearchAllCitiesByCountryId(TreeNode* node, int countryId, string& result);

	void SearchAllPetsByClientId(TreeNode* node, int clientId, string& result);

	void SearchAppointmentByPetId( int petId, string& result, TreeNode* node);

public:
	bool hh = false;

	BinaryTree() {
		this->root = NULL;
	}

	BinaryTree(Object* obj) {
		this->root = new TreeNode(obj);
	}

	void SetRoot(TreeNode* element) {
		this->root = element;
	}

	TreeNode* GetRoot() {
		return this->root;
	}

	bool IsEmpty() { return root == NULL; }

	bool Insert(Object*);

	Object* SearchById(int id, TreeNode* node);

	Pet* SearchPetByClientId(int id, TreeNode* node);

	Appointment* SearchAppointmentByIdAndPetId(int id, int petId, TreeNode* node);

	void SearchAppointmentByPetId(int petId, string& result);

	Medication* SearchLastMedication(int id, int petId, TreeNode* node);

	void SearchLastMedications(int petId, vector<string>& result, TreeNode* node);

	City* SearchCityById(int id, TreeNode* node);

	bool UpdateById(int id, string name, TreeNode* node);

	bool UpdateElementById(int id, Object* obj, TreeNode* node);

	//AVL
	void InsertBalanced(Object*);
	
	TreePointerNode RotateDoubleLeft(TreePointerNode node, TreePointerNode node1);

	TreePointerNode RotateDoubleRight(TreePointerNode node, TreePointerNode node1);

	TreePointerNode RotateLeft(TreePointerNode node, TreePointerNode node1);

	TreePointerNode RotateRight(TreePointerNode node, TreePointerNode node1);

	//Print
	void InOrder(string type, string& result);

	void PreOrder(string type, string& result);

	void PostOrder(string type, string& result);

	void SearchAllCitiesByCountryId( int countryId, string& result);

	void SearchAllPetsByClientId(int clientId, string& result);

	//AA TREE

	void GetClientReport(TreeNode* node, string type, string& result, float& sum);

	//Medication* SearchLastByDateMedication(int petId, string date, TreeNode* node);
	void SearchLastByDateMedication(int petId, string date, Medication& result, TreeNode* node);
};