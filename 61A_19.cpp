#include <iostream>
#include <cstring>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

    char n1[200]={0},n2[200]={0};

    cin >> n1 >> n2;

    int len=strlen(n1);

    for(int i=0;i<len;i++)
    {
        if (n1[i]==n2[i])
        {
            cout << '0';
        } else {
            cout << '1';
        }
    }

    cout << endl;

    return 0;
}