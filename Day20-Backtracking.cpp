#include <iostream>

using namespace std;
const int N=10;


bool isSafe(int arr[N][N] , int x,int y,int n){
    
    if(x<n && y<n && arr[x][y]==1){
        return true;
        
    }
    return false;
    
}

bool ratinMaze(int arr[N][N],int x, int y , int n , int solarr[N][N]){
    
    if(x==n-1 && y==n-1){
        solarr[x][y]=1;
        return true;
    }
    
    if(isSafe(arr,x,y,n)){
        solarr[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solarr)){
            return true;
        }
        if(ratinMaze(arr,x,y+1,n,solarr)){
            return true;
        }
        solarr[x][y]=0;
        
        return false;
    }
    return false;

    
    
}

int main()
{
    int n;
    cout << "Enter the size of the maze: ";
    cin >> n;

    int arr[N][N];
    cout << "Enter the maze elements (0 or 1): ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    
    
    int solArr[N][N] = {0}; // Initialize the solution array with zeros

    if (ratinMaze(arr, 0, 0, n, solArr)) {
        cout << "Solution Path:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << solArr[i][j] << " ";
            }
            cout << endl;}
        //cout << "No solution exists.\n";
    }
    else{
    cout << "No solution exists.\n";}
    return 0;
    
    
}
