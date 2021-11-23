#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

/*
 * 
 */

int lucky_generator(int lucky) {
    char l[10] = {0};
    sprintf(l, "%d\0", lucky);
    int len = strlen(l);
    bool flag = false;
    for (int i = len - 1; i >= 0; i--) {
        if (l[i] == '4') {
            l[i] = '7';
            flag = false;
            break;
        } else {
            flag = true;
            l[i] = '4';
        }
    }

    int r;

    if (flag) {
        l[len]='4';
        sscanf(l, "%d", &r);
    } else sscanf(l, "%d", &r);

    return r;
}

int main(int argc, char** argv) {

    int n,lucky=4;

    cin >> n;

    while(n>=lucky)
    {
        if(n%lucky==0)
        {
            cout << "YES" << endl;
            return 0;
        }

        lucky=lucky_generator(lucky);
    }

    cout << "NO" << endl;

    return 0;
}