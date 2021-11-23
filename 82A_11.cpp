#include <cmath>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    long int s, n, p;
    cin >> s;
    n = log2((float) (s + 5) / 5);
    p = pow(2, n);
    s = s - (p-1) * 5;
    int i = 0;
    if (s==0)
        i=4;
    for (; i < 5; i++) {
        s -= p;
        if (s <= 0)
            break;
    }

    switch (i) {
        case 0:
            cout << "Sheldon";
            break;
        case 1:
            cout << "Leonard";
            break;
        case 2:
            cout << "Penny";
            break;
        case 3:
            cout << "Rajesh";
            break;
        case 4:
            cout << "Howard";
            break;
    }

    return 0;
}