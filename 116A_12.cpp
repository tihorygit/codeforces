#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    int a,b,m=0,c=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        c-=a;
        c+=b;
        if (c>m)
            m=c;
    }
    cout << m <<endl;
    return 0;
}