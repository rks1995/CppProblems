#include <bits/stdc++.h>

using namespace std;

struct Node {
	int val;
	Node* left;
	Node* right;
	Node(int val) {
		this->val = val;
		this->left = nullptr;
		this->right = nullptr;
	}
}

void dfs(Node* root) {
	if (root == nullptr)
		return;
	stack<int> st;

}

int main() {
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	dfs(root);

	return 0;
}
