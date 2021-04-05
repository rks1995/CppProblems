#include <bits/stdc++.h>

using namespace std;

struct Node{
   int data;
   struct Node *left;
   struct Node *right;

   Node(int val){
      this->data = val;
      this->left = NULL;
      this->right = NULL;
   }
};

void inOrder(Node* root){
   if(root == NULL)
      return;
   inOrder(root->left);
   cout << root->data << " ";
   inOrder(root->right);
}

void preOrder(Node *root){
   if(root == NULL)
      return;
   cout << root->data << " ";
   preOrder(root->left);
   preOrder(root->right);
   
}

void postOrder(Node* root){
   if(root == NULL)
      return; 
   postOrder(root->left);
   postOrder(root->right);
   cout << root->data << " ";
}

int main(){
   Node* root =new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   inOrder(root);
   cout << endl;
   preOrder(root);
   cout << endl;
   postOrder(root);
   cout << endl;
   return 0;
}

