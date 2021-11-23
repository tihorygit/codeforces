#include <iostream>

using namespace std;

/*
 * 
 */

void ff(bool res[],int x,int d)
{
    for(int i=x;i<=d;i+=x)
    {
        res[i]=true;
    }
}

int main(int argc, char** argv) {

    int k,l,m,n,d;
    bool res[200000]={false};
    cin >> k >> l >> m >> n >> d;

    ff(res,k,d);
    ff(res,l,d);
    ff(res,m,d);
    ff(res,n,d);
    int c=0;
    for(int i=1;i<=d;i++)
        if (res[i])
            c++;
    cout << c << endl;

    return 0;
}