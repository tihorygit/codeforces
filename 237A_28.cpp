#include <iostream>
#include <cmath>
using namespace std;

/*
 *
 */

int main(int argc, char** argv) {

    int h[100005]={0},m[100005]={0},n;
    int r=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> h[i] >> m[i];
    }

    int i=0;

    while(i<n)
    {
        int c=1;

        int j=i+1;
        for(;j<n;j++)
        {
            if (h[i]!=h[j] || m[i]!=m[j])
                break;
            c++;
        }
        i=j;
        r=max(r,c);
    }

    cout << r << endl;

    return 0;
}
