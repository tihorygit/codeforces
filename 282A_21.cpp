#include <cstring>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    int x=0;
    string s;

    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        if (s[0]=='+' || s[s.length()-1]=='+')
            x++;
        else x--;
    }

    cout << x << endl;
    return 0;
}