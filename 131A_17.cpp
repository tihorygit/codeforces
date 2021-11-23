#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string s,s2="";
    bool flag=false;
    cin >> s;

    for(int i=1;i<s.length();i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            s2=s2+ (char)(s[i]-'A'+'a');
        }
        else {
            flag=true;
            break;
        }
    }

    if (!flag)
    {
        if (s[0]>='a' && s[0]<='z')
            s2=(char)(s[0]-'a'+'A')+s2;
        else s2=(char)(s[0]-'A'+'a')+s2;
        cout << s2 << endl;
    }
    else cout << s << endl;

    return 0;
}