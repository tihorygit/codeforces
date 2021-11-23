#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char ch[30];
    cin >> ch;

    int l=0;

    for(int i=0;i<strlen(ch);i++)
    {
        if (ch[i]=='4' || ch[i]=='7')
            l++;
    }

    bool flag=false;

    sprintf(ch,"%d\0",l);

    for(int i=0;i<strlen(ch);i++){
        if (ch[i]!='4' && ch[i]!='7')
        {
            flag=true;
            break;
        }
    }

    if (flag){
        cout << "NO" << endl;
    } else cout << "YES" << endl;

    return 0;
}