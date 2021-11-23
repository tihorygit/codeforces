#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
 
 
/*
 * 
 */
int main() {
    int n;
    cin >> n;
    int numbers[100];
    int minIndex=0,maxIndex=0;
    for(int i=0;i<n;i++){
        cin >> numbers[i];
        if (numbers[i]<=numbers[minIndex]){
            minIndex=i;
        }
        if (numbers[i]>numbers[maxIndex]){
            maxIndex=i;
        }
    }
    int count=0;
    for(int i=minIndex;i<n;i++){
        count++;
        if (i==maxIndex)
            maxIndex--;
    }
    count--;
    cout << maxIndex+count << endl;
    return 0;
}