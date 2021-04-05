#include <bits/stdc++.h>

using namespace std;

struct Node{
   int val;
   struct Node* left;
   struct Node* right;
   Node(int val){
      this->val = val;
      this->left = NULL;
      this->right = NULL;
   }
};

void bfs(struct Node* root){
   if(root == NULL)
      return;
   
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
      Node *curr = q.front();
      cout << curr->val << " ";
      q.pop();
      
      if(curr->left) q.push(curr->left);
      if(curr->right) q.push(curr->right);
   }
}
int main(){

   Node* root= new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left =  new Node(4);
   root->right->right = new Node(5);

   bfs(root);

   return 0;
}

