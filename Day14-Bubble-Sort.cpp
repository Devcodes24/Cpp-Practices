#include <iostream>

using namespace std;

void bubbleSort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int curr=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=curr;
            }
        }
    }
    
}

int main()
{
    int arr[5]={3,2,5,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    bubbleSort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    

    return 0;
}
