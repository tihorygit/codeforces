#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int n, in, maxCount = 0, count = 0, last = -1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in;
        if (in < last) {
            maxCount = max(maxCount, count);
            count = 0;
        }
        last = in;
        count++;
    }
    maxCount = max(maxCount, count);
    cout << maxCount << endl;
    return 0;
}
