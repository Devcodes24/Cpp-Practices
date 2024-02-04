#include <iostream>

using namespace std;

//this will work with below commented part,
//#define n 20

class queue{
    //int *arr;
    
    int arr[20];
    int front;
    int back;
    
    public:
    queue(){
        
        //Commented below is another good method , can check it out😉
        //arr=new int[n];
        
        int arr[20];
        back=-1;
        front=-1;
        
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue overflowed!";
            return;
        
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
        
    }
    void pop(){
        if(front==-1){
            cout<<"Queue is empty";
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1){
            cout<<"no element";
            return -1;
        }
        return arr[front];
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek();

    return 0;
}
