#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
    int a, b;
    cin >> a >> b;
    double ab = (log(b) - log(a)) / (log(3) - log(2));
    cout << (int) ceil(ab + 0.01);
    return 0;
}