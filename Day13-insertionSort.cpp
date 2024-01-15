#include <iostream>

using namespace std;


void insertSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    
}


int main()
{
    int arr[5]={3,2,5,4,1};
    cout<<"Given array: ";
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertSort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
