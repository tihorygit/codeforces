
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n;
    int gift[110];
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> gift[i];
    for(int i=1;i<=n;i++)
    {
        for(int l=1;l<=n;l++)
        {
            if (gift[l]==i)
                cout << l;
        }
        if (i!=n)
            cout << " ";
        else cout << endl;
    }
    return 0;
}