#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node *next;
};

// linkedList Traversal and printing;

void printLinkedList(Node *p) {
	if (p == NULL)
		cout << "List is Empty";
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

// adding node in the front

void addNodeAtFront(Node **head, int value) {
	struct Node *temp = new Node();
	temp->data = value;
	temp->next = *head; //*head contains the actual address of the head
	*head = temp;
}

//inserting a node between 2 and 3;

void insertNodeBetween(Node *head, int value) {
	struct Node *temp = new Node();
	struct Node *p = head;
	temp->data = value;
	temp->next = NULL;

	while (p->data != 2) {
		p = p->next;
	}

	temp->next = p->next;
	p->next = temp;
}

//adding node at the end
void addNodeAtEnd(Node *head, int value) {
	struct Node *last = new Node();
	struct Node *p = head;
	last->data = value;
	last->next = NULL;
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = last;
	last->next = NULL;
}

//remove element
void removeElement(Node *head, int data) {
	Node *p = head;
	while (p->next->data != data) {
		p = p->next;
	}
	Node *t = p->next;
	p->next = p->next->next;
	free(t);

}

void deleteLinkedList(Node **head) {
	Node *curr = *head;
	Node *next;

	while (curr != NULL) {
		next = curr->next;
		free(curr);
		curr = next;
	}
	*head = NULL;
}

int main() {
	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	cout << "Original List: ";
	printLinkedList(head);

	cout << "After Inserting 5 at front: ";
	addNodeAtFront(&head, 5);

	printLinkedList(head);

	cout << "After Inserting 10 in between 2 and 3: ";
	insertNodeBetween(head, 10);

	printLinkedList(head);

	cout << "After Inserting 7 at end: ";
	addNodeAtEnd(head, 7);

	printLinkedList(head);

	cout << "After removing 10 from the list: ";
	removeElement(head, 10);

	printLinkedList(head);

	deleteLinkedList(&head);

	printLinkedList(head);
	return 0;
}