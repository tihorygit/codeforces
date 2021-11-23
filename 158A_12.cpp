#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int m,n,a,count=0;
    int part[100];
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> part[i];
    }

    for(int i=1;i<=n;i++)
    {
        if (part[i]>=part[m] && part[i]>0)
            count++;
    }
    cout << count <<endl;
    return 0;
}