#include <cstdlib>
#include <iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

    long long int n,m,a;
    cin >> n >> m >> a;

    n=n/a + (n%a>0 ? 1 : 0);
    m=m/a + (m%a>0 ? 1 : 0);
    cout << m*n;
    return 0;
}
