#include <cstdlib>
#include <iostream>
using namespace std;
 
/*
 * 
 */
int main(int argc, char** argv) {
    int n,p,l;
    cin >> n;
    bool levels[100]{false};
    cin >> p;
    for(int i=0;i<p;i++){
        cin >> l;
        levels[l-1]=true;
    }
    
    cin >> p;
    for(int i=0;i<p;i++){
        cin >> l;
        levels[l-1]=true;
    }
    
    for(int i=0;i<n;i++)
        if (!levels[i]){
            cout << "Oh, my keyboard!" <<endl;
            return 0;
        }
    cout << "I become the guy." <<endl;
    return 0;
}