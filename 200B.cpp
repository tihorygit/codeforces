
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv) {

    int n;
    double sum = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        double a;
        cin >> a;
        sum += a;
    }

    cout << fixed << setprecision(6) << sum / n;

    return 0;
}