#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
 
using namespace std;
 
int main(int argc, char **argv) {
    long n;
    string s;
    cin >> n;
    cin >> s;
    long a = 0, d = 0;
    for (char &c : s) {
        if (c == 'A')
            a++;
        else d++;
    }
    if (a > d) {
        cout << "Anton";
    } else if (a < d) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
    cout << endl;
    return 0;
}