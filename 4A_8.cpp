#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n;

    cin >> n;
    if (n % 2 == 0 && n>2) {
        cout << "YES" << endl;
    } else
        cout << "NO" << endl;

    return 0;
}
 