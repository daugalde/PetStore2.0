#pragma once
#include "Node.h"

using namespace std;

class List {

private:
	PointerNode head;

public:
	List() { head = NULL; }

	bool IsEmpty() { return head == NULL; }

	bool HasTreatmentId(int id);

	bool UpdateTreatmentCount(int id);

	bool HasInvoiceId(int id);

	bool HasProductMakeId(int id);

	int Length();

	void Push(Object* obj);

	List* Join(List* list);

	void DisplayMostVisitedAisle();

	void DisplayLessVisitedAisle();

	void DisplayClientWithMostInvoices();

	void DisplayClientWithLessInvoices();

	void DisplayGreatestInvoicedAmount();

	void DisplayAllProductsByAisleId(int aisleId);

	void DisplayClientWithGreatestInvoiceCount();

	void Display(string type);

	float Sum(List inventory);

	bool GetItemsToRefillShelf(List inventorylist, List* productList, List* hotItems);

	bool GetItemsToRefillInventory(List inventorylist, List* productList);

	bool GetItemsToInventory();

	Object* GetObjectById(int id);

	Object* GetObjectByProductId(int id);

	Object* GetObjectByMakeProductId(int id);

	Object* GetObjectFromInventory(int id);

	bool UpdateObject(Object* value);

	string ToString(string type);

	PointerNode GetHead() {
		return this->head;
	}

	friend class BinaryTree;
};
