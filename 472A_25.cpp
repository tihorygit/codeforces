#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

/*
 * 
 */

bool isPrime(int num){
    if (num<2)
        return false;
    int h=sqrt(num);
    for(int i=2;i<=h;i++){
        if (num%i==0)
            return false;
    }
    return true;
}

int main() {

    int n;
    cin >> n;

    if (n%2==0){
        cout << 4 << " " << (n-4) << endl;
    } else {
        int x=4;
        while (isPrime(x) || isPrime(n-x))
            x++;
        cout << x << " " << (n-x) << endl;
    }

    return 0;
}