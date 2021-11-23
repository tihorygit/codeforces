#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
 
using namespace std;
 
int main(int argc, char **argv) {
    string s;
    cin >> s;
    int l = 0, u = 0;
    for (char &c : s) {
        if (isupper(c))
            u++;
        else l++;
    }
    if (u > l) {
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
    return 0;
}