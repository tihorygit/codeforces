#include <iostream>
#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string s;
    cin >> s;

    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='A' || s[i]=='a' || s[i]=='O' || s[i]=='o' ||
            s[i]=='Y' || s[i]=='y' || s[i]=='E' || s[i]=='e' ||
            s[i]=='U' || s[i]=='u' || s[i]=='I' || s[i]=='i')
            continue;
        if (s[i]>='A' && s[i]<='Z')
            cout << '.' <<  (char)(s[i]-'A'+'a');
        if (s[i]>='a' && s[i]<='z')
            cout << '.' << s[i];
    }

    return 0;
}