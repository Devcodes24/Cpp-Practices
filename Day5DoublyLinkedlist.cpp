#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* prev;
    node*next;
    
    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void insertathead(node* &head , int val){
    
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
    
    
}

void insertat(node* &head , int val){
    
    node* n= new node(val);
    if(head==NULL){
        insertathead(head,val);
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* &head){
    
    node* temp=head;
   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node* head=NULL;
    insertathead(head,9);
    insertat(head,3);
    insertat(head,4);
    insertat(head,5);
    insertathead(head,0);
    insertat(head,6);
    insertat(head,7);
    display(head);
    

    return 0;
}
