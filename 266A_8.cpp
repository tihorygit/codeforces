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
    cin >> s;
    for(int i=0;i<n-1;i++)
    {
        if (s[i]==s[i+1])
            x++;
    }

    cout << x << endl;
    return 0;
}