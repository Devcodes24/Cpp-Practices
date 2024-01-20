#include <iostream>

using namespace std;

int binarysearch (int arr[], int n, int l, int r)
{

  
  while (l <= r)
    {
      int m = l + (r - l) / 2;
      
      if (arr[m] == n)
	  {
	      

	    return m;
	    
	  }
      if (arr[m] < n)
	  {
	    l = m + 1;
	    
	  }
      else
	  {
	    r = m - 1;
	  }
      

    }
  return -1;
}



int main ()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    int r=n-1;
    int l=0;
    int result=binarysearch(arr,x,l,r);
    if(result==-1){
        cout<<"Term you entered is not found!";
    }
    else{
        cout<<"Found at index: "<<result<<" which is=  "<<arr[result];
    }
    

}
