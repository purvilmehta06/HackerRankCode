#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }
    node * insert(node * root, int value) {

    int o=-1,m=-1;
    struct node* x;
    x = new node;
    x->left = x->right=NULL;
    x->data=value;
    node * temp=root,temp1;
    if(root==NULL)
    {
        root=x;root->data=value;
    }
    else
    {
        while(o==-1){
        if(temp->data>value)
        {
            if(temp->left!=NULL){
            temp=temp->left;}
                else
                {
                    o=0;
                }
        
        }
        else
        {
            if(temp->right!=NULL){
            temp=temp->right;}
            else{m=0;}
        }   
        }
        if(m==0)
        {
            temp->right=x;
            x=temp;
        }
        else
        {
            temp->left=x;
            x=temp;
        }
        
    }
   return root;
}
};

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
    myTree.preOrder(root);
  
    return 0;
}
