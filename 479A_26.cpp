#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int a,b,c;
    cin >> a >> b >>c;
    int r1=(a+b)*c,r2=a*(b+c),r3=a*b*c,r4=a+b+c,r5=a*b+c,r6=a+b*c;
    int r7=max(r1,max(r2,r3)),r8=max(r4,max(r5,r6));
    int r=max(r7,r8);
    cout << r << endl;
    return 0;
}
 