#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string s1;
    int c;
    char at;
    cin >> s1;
    at=s1[0];
    c=1;
    for (int i=1;i<s1.length();i++)
    {
        if (s1[i]==at)
            c++;
        else {
            c=1;
            at=s1[i];
        }

        if (c==7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}