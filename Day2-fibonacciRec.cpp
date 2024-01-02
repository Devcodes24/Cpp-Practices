#include <iostream>

using namespace std;

int findfibo(int n , int p){
    
    if (p>50){
        return 1;
    }
    
    int a;
    a=n+p;
    cout<<" "<<a;
    return findfibo(p,a);
    
}


int main()
{
    
    int n=0;
    int p=1;
    cout<<n<<" "<<p;
    findfibo(n,p);

    return 0;
}
