
#include <iostream>


using namespace std;

int main(int argc, char **argv) {

    int n, h;
    int a;
    int w = 0;
    cin >> n >> h;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        w += a > h ? 2 : 1;
    }

    cout << w;

    return 0;
}