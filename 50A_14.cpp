#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int m,n;
    int count;

    cin >> m >> n;
    if (m%2==0)
    {
        count=(m/2)*n;
    } else if (n%2==0)
    {
        count=(n/2)*m;
    } else {
        count=max(((n-1)/2)*m+(m-1)/2,((m-1)/2)*n+(n-1)/2);
    }
    cout << count << endl;
    return 0;
}