#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int n,count=0;
    cin >> n;
    string c,l="";
    for(int i=0;i<n;i++){
        cin >> c;
        if (c!=l)
            count++;
        l=c;
    }
    cout << count <<endl;
    return 0;
}