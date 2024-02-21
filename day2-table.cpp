#include <iostream>
using namespace std;

int findtable(int n,int p){
    int h;
    if(p==11){
        return 1;
    }
    h= n*p;
    cout<<h<<endl;
    findtable(n,p+1);
    
   
}

int main()
{
    int n;
    int p=1;
    
    cout<<"Enter ur no here: ";
    cin>>n;
    findtable(n,p);
    

    return 0;
}
