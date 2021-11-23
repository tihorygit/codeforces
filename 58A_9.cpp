#include <iostream>
#include <cstring>
using namespace std;

/*
 * 
 */

char nextChar(char ch,bool flag)
{
    switch(ch)
    {
        case 'h':return  'e';
        case 'e':return 'l';
        case 'l':return flag ? 'l' : 'o';
    }
    return '\0';
}

int main(int argc, char** argv) {

    char w[150],lastChar;
    int len;

    cin >> w;
    len=strlen(w);
    lastChar='h';
    bool flag=false;
    for(int i=0;i<len;i++)
    {
        if(lastChar==w[i])
        {
            if (lastChar=='o')
            {
                cout << "YES" << endl;
                return 0;
            }

            lastChar=nextChar(lastChar,flag);

            if (lastChar=='l')
                flag=!flag;
        }
    }

    cout << "NO" << endl;

    return 0;
}