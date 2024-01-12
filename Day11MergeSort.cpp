#include <iostream>

using namespace std;

void merge(int arr[],int l , int n , int r){
    int a=n-1;
    int b=r-n;
    int arr1[a];
    int arr2[b];
    int k=0;
    int p=0;
    
    for(int i=0;i<=a;i++){
        arr1[i]= arr[i];
        
    }
    for(int i=b;i<=r;i++){
        arr2[i]=arr[i];
        
    }
    for(int i=0;i<r;i++){
        if(arr1[k]<arr2[p]){
            arr[i]=arr1[k];
            k++;
        }
        if(arr1[k]>arr2[p]){
            arr[i]=arr2[p];
            p++;
        }
        
        
    }
    
}

void mergesort(int arr[],int l ,int r){
    int n=l+(l+r)/2;
    if(l>=r){
        return;
    }
    mergesort(arr,l,n-1);
    mergesort(arr,n,r);
    merge(arr,l,n,r);
}

int main()
{
    int arr[10]={5,4,3,2,1,7,8,9,6,10};
    mergesort(arr,0,9);
    
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
