#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) {
    int n, k;
    cin >> n >> k;
    map<string, string> dic;
    for (int i = 0; i < k; ++i) {
        string s, t;
        cin >> s >> t;
        dic[s] = t;
    }
    for (int j = 0; j < n; ++j) {
        string s, t;
        cin >> s;
        t = dic[s];
        if (t.length() < s.length()) {
            cout << t;
        } else cout << s;
        if (j != n - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}