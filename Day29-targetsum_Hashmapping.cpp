#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


vector<int> findsum(vector<int> &v, int targetsum){
    
    unordered_map<int,int> m;
    vector<int> ans(2);
    for (int i=0;i<v.size();i++){
        
        if(m.find(targetsum-v[i])!=m.end()){
            ans[0]=m[targetsum-v[i]];
            ans[1]=i;
            return ans;
            
        }
        else{
            m[v[i]]=i;
            
        }
        
        
        
    }
    return ans;
    
    
}


int main()
{
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;
    int targetsum;
    vector <int> v(n);
    for (int i=0; i<n;i++){
        cin>>v[i];
        
        
    }
    cout<<"Enter target sum : ";
    cin>>targetsum;
    
    vector<int> ans=findsum(v,targetsum);
    cout<<ans[0]<<"  "<<ans[1]<<endl;
    
    
    

    return 0;
}
