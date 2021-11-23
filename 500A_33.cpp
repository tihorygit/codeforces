#include <cstdlib>
#include <iostream>
 
using namespace std;

int main(int argc, char** argv) {
    int n,t;
    cin >> n >> t;
    int index=1,val;
    for(int i=1;i<=n;i++){
        if (index == t) {
            cout << "YES" << endl;
            return 0;
        } else if (index > t) {
            cout << "NO" << endl;
            return 0;
        }
        
        cin >> val;
        
        if (index==i)
            index+=val;
    }
    return 0;
}