#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int a,b;

    cin >> a >> b;

    int r=a;

    a-=b;
    a++;

    while(a>0)
    {
        r++;
        a-=b;
        a++;
    }

    cout << r;

    return 0;
}