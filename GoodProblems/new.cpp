#include <iostream>

using namespace std;

struct Node {
	int val;
	Node *next;
};

int reverseList(Node *head) {
	Node *prev = NULL;
	Node *curr = head;
	while (head) {
		curr = curr->next;
		head->next = prev;
		prev = head;
		head = curr;
	}
	int reverseNum = 0;
	while (prev) {
		reverseNum = reverseNum * 10 + prev->val;
		prev = prev->next;
	}
	return reverseNum;
}

int returnListSum(Node* head1, Node* head2) {
	if (head1 == NULL)
		return reverseList(head2);
	if (head2 == NULL)
		return reverseList(head1);

	int a = reverseList(head1);
	int b = reverseList(head2);

	return a + b;
}

int main() {
	Node* head1 = NULL;
	Node* second1 = NULL;
	// allocate 3 nodes in the heap
	head1 = new Node();
	second1 = new Node();
	head1->val = 1;
	head1->next = second1;
	second1->val = 2;
	second1->next = NULL;

	Node* head2 = NULL;
	Node* second2 = NULL;
	// allocate 3 nodes in the heap
	head2 = new Node();
	second2 = new Node();
	head2->val = 5;
	head2->next = second2;
	second2->val = 2;
	second2->next = NULL;
	cout << returnListSum(head1, head2) << endl; // ans = 46
}

