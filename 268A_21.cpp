#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    int u[35][2]={0};
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> u[i][0] >> u[i][1];
    int r=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if (i==j)
                continue;
            if(u[i][0]==u[j][1])
                r++;
        }
    cout << r << endl;
    return 0;
}