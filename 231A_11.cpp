#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    cin >> n;
    int p,v,t,count=0;
    for (int i=0;i<n;i++)
    {
        cin >> p >> v >>t;
        if ((p==1 && (v==1 || t==1))
            || (v==1 && (p==1 || t==1))
            || (t==1 && (p==1 || v==1)))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}