#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    long long int A[4];

    for(int i=0;i<4;i++)
        cin >> A[i];

    int c=0;
    int b=0;
    for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
            if (A[i]==A[j])
            {
                c++;
                A[j]=b;
                b--;
            }
    cout << c <<endl;
    return 0;
}