#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node*right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorder(struct Node* root){
    if (root==NULL){
        return ;
        
    }
    
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
    
}

int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(3);
    root->right=new Node(5);
    preorder(root);
    

    return 0;
}
