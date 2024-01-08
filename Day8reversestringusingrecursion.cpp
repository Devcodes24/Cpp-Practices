#include <iostream>
#include<string>
using namespace std;

void changeit(string name , int a){
    
    if(a<0){
        return;
    }
    cout<<name[a-1];
    changeit(name,a-1);
    
    
    
}


int main()
{
    string name;
    cout<<"Enter a word to be reversed : ";
    cin>>name;
    int a=name.length();
    
    changeit(name,a);

    return 0;
}
