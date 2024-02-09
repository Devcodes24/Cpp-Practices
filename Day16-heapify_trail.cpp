#include <iostream>

using namespace std;

int swap(int a ,int b){
    int c=0;
    c=a;
    a=b;
    b=c;
    return a, b;
    
}

void heapify(int arr[] , int n , int i){
    int largest= i;
    int left = 2*i+1;
    int right = 2*i+2;
  
    
    if(left<n&&arr[left]>arr[largest]){
        
        largest=left;
    }
    
    if(right<n&&arr[right]>arr[largest]){
        
        largest=left;
    }
    
    if(n!=largest){
        swap(arr[i],arr[largest]);
        heapify(arr , n ,largest);
        
    }
    
}
int main()
{
    int arr[5]={4,3,5,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    for(int i=0 ; i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    
}
