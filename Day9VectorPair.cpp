#include <iostream>
//including vector header file.
#include<vector>

using namespace std;

int main()
{
    //needed to make array first to make input or use pushback.
    arr1[]={1,3,5,7,8};
    arr2[]={2,4,6,8,0};
    
    vector<pair<int,int>> v;
    //taking input from array to vector
    for(int i=0;i<=4;i++){
        v.push_back(make_pair(arr1[i],arr2[i]));}
    
    //printing vector.
    for(int i=0;i<=4;i++){
        cout<<v[i].first<<" , "<<v[i].second;
        
    }

    return 0;
}
