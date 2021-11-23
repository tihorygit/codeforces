#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;


/*
 * 
 */
int main() {
    char s[101],t[101];
    cin >> s >> t;
    int sl=strlen(s),tl=strlen(t);
    if (sl!=tl){
        cout << "NO" << endl;
        return 0;
    }

    //cout << sl << " " << tl;

    for (int i=0;i<sl;i++){
        if (s[i]!=t[tl-i-1]){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;


    return 0;
}