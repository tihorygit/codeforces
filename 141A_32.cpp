#include <iostream>
#include <cstring>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char w1[300]={0},w2[300]={0};
    int l1,l2;

    cin >> w1;
    l1=strlen(w1);
    cin >> w1+l1;
    cin >> w2;

    l1=strlen(w1);
    l2=strlen(w2);


    if (l1!=l2)
    {
        cout << "NO" << endl;
        return 0;
    }



    for(int i=0;i<l2;i++)
    {
        char fn=w2[i];
        bool flag=false;

        for(int j=0;j<l1;j++)
        {
            if (w1[j]==fn)
            {
                w1[j]='0';
                flag=true;
                break;
            }

        }

        if (!flag){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
 