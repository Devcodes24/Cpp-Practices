#include <iostream>

//also inclued this file.
#include <vector>

using namespace std;

int main()
{
    //v is variable that stores the elements of vector. 
    vector<int> v;
    
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    
    //printing like an array.
    for(int i=0; i<=3;i++){
        
        cout<<v[i];
    }

    return 0;
}
