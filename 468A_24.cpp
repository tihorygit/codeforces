#include <cstdlib>
#include <iostream>
 
using namespace std;
 
/*
 * 
 */
int main(int argc, char** argv) {
    long long int n;
    cin >> n;
    int odd,even;
    if(n%2==0){ 
        cout << n/2;
    } else cout << (n/2)-n;
    cout << endl;
    return 0;
}
 