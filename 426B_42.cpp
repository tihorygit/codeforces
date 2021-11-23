#include <iostream>
#include <cstring>
#include <string>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    int a[150][150] = {0};
    int x, y;
    cin >> x >> y;

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            cin >> a[i][j];

    while (true) {
        if (x % 2 != 0) {
            cout << x << endl;
            return 0;
        }
        for (int i = 0, k = x - 1; i < x; i++, k--) {
            for (int j = 0; j < y; j++) {
                if (a[i][j] != a[k][j]) {
                    cout << x << endl;
                    return 0;
                }
            }
        }
        x = x / 2;
    }

    return 0;
}