#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
 
using namespace std;
 
int main(int argc, char **argv) {
    unsigned long long n, k;
    cin >> n >> k;
    unsigned long long mid = (n + 1) / 2;
    if (k <= mid) {
        cout << k * 2 - 1;
    } else {
        cout << (k - mid) * 2;
    }
    cout << endl;
    return 0;
}