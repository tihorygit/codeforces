#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    string s1,s2;

    cin >> s1 >> s2;
    for (int i=0;i<s1.length();i++)
    {
        if (tolower(s1[i])>tolower(s2[i]))
        {
            cout << "1" << endl;
            return 0;
        } else if (tolower(s1[i])<tolower(s2[i]))
        {
            cout << "-1" << endl;
            return 0;
        }
    }

    cout << "0" << endl;
    return 0;
}
