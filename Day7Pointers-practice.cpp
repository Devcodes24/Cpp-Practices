#include <stdio.h>
#include <iostream>
using namespace std;

//testing pointers

int main()
{
   /* int a=23;
    int *ptr=&a;
    cout<<++*ptr<<"  ";
    */
    
    
    int arr[4]={20,30,40,50};
    
   cout<<end(arr)-begin(arr);
    
    
    int *ptr=arr;
    
    for(int i=0;i<=end(arr)-begin(arr)-1;i++){
    cout<< *ptr<<"   ";
    ptr++;
    }

    return 0;
}
