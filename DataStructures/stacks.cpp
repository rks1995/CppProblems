#include <iostream>

using namespace std;
int top = -1;

bool isempty() {
	if (top == -1)
		return true;
	return false;
}

void push(int *stack, int x, int n) {
	if (top == n - 1) {
		cout << "Stack is full" << endl;
	}
	else {
		top = top + 1;
		stack[top] = x;
	}
}

void pop(int *stack) {
	if (isempty()) {
		cout << "stack is empty, insert elements" << endl;
	}
	else {
		int x = stack[top];
		cout << "Element pop is: " << x << endl;
		top = top - 1;
	}
}

int size(int top) {
	return top + 1;
}

int topelement(int *stack) {
	return stack[top];
}

int main() {
	cout << "Enter size of Stack: ";
	int n; cin >> n;
	int *stack = new int[n];

	cout << "Enter Elements in the stack with space separated: ";
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		push(stack, x, n);
	}

	cout << "Size after insertion of n elements: " << size(top) << endl;

	// push(stack, 4, 3);
	// push(stack, 10, 3);

	// cout << "Size of stack after inseting 3 elements: " << size(top) << endl;

	// push(stack, 11, 3);

	pop(stack);

	cout << "size after poping 1 element: " << size(top) << endl;

	cout << "topElement: " << topelement(stack) << endl;
	pop(stack);
	pop(stack);
	pop(stack);

	delete []stack;

}