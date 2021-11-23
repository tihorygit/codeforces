#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
 
using namespace std;
 
int main(int argc, char **argv) {
    int n;
    unsigned long long k;
    int e = 0, o = 0;
    int eI = -1, oI = -1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        if ((k & 1) == 0) {
            e++;
            eI = i;
        } else {
            o++;
            oI = i;
        }
        if (e == 1 && o > 1) {
            cout << (eI + 1) << endl;
            break;
        } else if (o == 1 && e > 1) {
            cout << (oI + 1) << endl;
            break;
        }
    }
    return 0;
}