#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
/*
 * 
 */
int main(int argc, char** argv) {
    int n,m;
    cin >> n >> m;
    vector<int> vec(m);
    for(int i=0;i<m;i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    int result=1e9;
    for(int i=0;i+n-1<m;i++){
        result=min(result,vec[i+n-1] - vec[i]);
    }
    cout << result <<endl;
    return 0;
}