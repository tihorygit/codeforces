#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string p;

    cin >> p;
    for(int i=0;i<p.length();i++)
    {
        if (p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}