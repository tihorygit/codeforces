#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */

int gcd(int n,int k)
{
    int m;
    if (n==0)
        return k;
    if (k==0)
        return n;
    m=n%k;
    while(m>0)
    {
        n=k;
        k=m;
        m=n%k;
    }

    return k;
}

int main(int argc, char** argv) {

    int a,b,n,gcdr;
    cin >> a >> b >> n;
    while(true)
    {
        gcdr=gcd(a,n);
        if (gcdr>n){
            cout << "1" << endl;
            return 0;
        }

        n-=gcdr;

        gcdr=gcd(b,n);
        if (gcdr>n){
            cout << "0" << endl;
            return 0;
        }

        n-=gcdr;
    }


    return 0;
}