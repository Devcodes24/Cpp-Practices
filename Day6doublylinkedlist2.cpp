#include <iostream>

using namespace std;


class node{
    public:
    int data;
    node* prev;
    node* next ;
    
    node(int val){
        data=val;
        prev=NULL;
        next = NULL;
        
    }
};

void insertathead(node* &head,int val){
    node* n=new node(val);
    
    if(head!=NULL){
        head->prev=n;
    }
    n->next=head;
    head=n;;
}


void insertat(node* &head , int val){
    node* n=new node(val);
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
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}


int main()
{
    node* head=NULL;
    insertat(head,3);
    insertat(head,4);
    insertat(head,1);
    insertat(head,6);
    insertathead(head,0);
    display(head);

    return 0;
}
