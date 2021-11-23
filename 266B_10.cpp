#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n,t;
    char queue[100];

    cin >> n >> t;
    cin >> queue;
    for(int j=1;j<=t;j++)
        for(int i=1;i<n;i++)
        {
            if (queue[i-1]=='B' && queue[i]=='G')
            {
                queue[i]='B';
                queue[i-1]='G';
                i++;
            }
        }
    cout << queue << endl;
    return 0;
}