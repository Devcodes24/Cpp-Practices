#include <iostream>

using namespace std;


void bubblesort(int arr[]){
    int p=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                p=arr[i];
                arr[i]=arr[j];
                arr[j]=p;
            }
            
        }
        
    }
    
    
}

int main()
{
    int arr[5]={5,3,4,1,2};
    bubblesort(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
