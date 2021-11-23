
#include <iostream>


using namespace std;

int main(int argc, char **argv) {

    int64_t a, b;
    cin >> a >> b;

    while (b > 0) {
        int f = a % 10;
        if (f == 0) {
            a = a / 10;
            b--;
            continue;
        } else {
            if (f > b) {
                a -= b;
                b = 0;
            } else {
                a -= f;
                b -= f;
            }
        }
    }

    cout << a;

    return 0;
}