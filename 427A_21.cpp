#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

    int n,k;

    int p=0,r=0;

    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> k;
        if (p==0 && k==-1)
            r++;
        else if (k==-1)
            p--;
        else if (k>-1)
            p+=k;
    }

    cout << r;

    return 0;
}