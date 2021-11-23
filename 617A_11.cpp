#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(int argc,char **argv) {
    int x;
    cin >> x;
    int n = x % 5;
    int y = x / 5;
    if (n > 0) {
        y++;
    }
    cout << y << endl;
    return 0;
}