#include <iostream>
#include <vector>

using namespace std;

int maxsubarray(vector<int> &num ){
    int sum=0;
    int maxi=num[0];
    
    for(int i=0;i<num.size();i++){
        sum=sum+num[i];
        maxi=max(sum,maxi);
        cout<<"maxi:"<<maxi<<" ";
        if(sum<0){
            sum=0;
        }
    }
    cout<<endl;
    cout<<"End maximum result: ";
    return maxi;
    
}

int main()
{
    vector<int> num;
    num.push_back(-1);
    num.push_back(3);
    num.push_back(4);
    num.push_back(-4);
    num.push_back(5);
    num.push_back(-5);
    for(int i=0;i<6;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    cout<<maxsubarray(num);
    

    return 0;
}
