#include <cstdlib>
#include<iostream>
 
using namespace std;
 
/*
 * 
 */
int main(int argc, char** argv) {
 
    int n,m;
    cin >> n >> m;
    
    bool grid[110][110];
    
    bool winner=false;
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            grid[i][j]=false;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (!grid[i][j]){
                for(int k=0;k<n;k++)
                    grid[k][j]=true;
                for(int k=0;k<m;k++)
                    grid[i][k]=true;
                winner=!winner;
            }
        }
    }
    
    if (winner)
        cout << "Akshat";
    else cout << "Malvika";
    
    return 0;
}