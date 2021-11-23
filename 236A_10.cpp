#include <iostream>
#include <cstring>

using namespace std;


int partition(char* input, int p, int r)
{
    char pivot = input[r];

    while ( p < r )
    {
        while ( input[p] < pivot )
            p++;

        while ( input[r] > pivot )
            r--;

        if ( input[p] == input[r] )
            p++;
        else if ( p < r )
        {
            char tmp = input[p];
            input[p] = input[r];
            input[r] = tmp;
        }
    }

    return r;
}

void quicksort(char* input, int p, int r)
{
    if ( p < r )
    {
        int j = partition(input, p, r);
        quicksort(input, p, j-1);
        quicksort(input, j+1, r);
    }
}


int main()
{
    string s;
    cin >> s;
    bool alphabet[26]={false};
    for(int i=0;i<s.length();i++)
    {
        alphabet[s[i]-'a']=true;
    }

    int c=0;

    for(int i=0;i<26;i++)
        if (alphabet[i])
            c++;

    if (c%2==0)
    {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}