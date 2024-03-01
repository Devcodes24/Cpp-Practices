

#include <iostream>

using namespace std;

int findfact(int n){
    if(n==1){
        return 1;
    }
    return n*findfact(n-1);
    
}

int main()
{
    //printing factorial using recursion .
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    cout<<findfact(n);
    
    

    return 0;
}

