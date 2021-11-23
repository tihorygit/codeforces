#include <iostream>
 
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
    char res[200]={0};
    int len=0;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i+=2)
        res[i/2]=s[i];
    len=s.length()/2;
 
    quicksort(res,0,len);
 
    for(int i=0;i<len;i++)
        cout << res[i] << "+";
    cout << res[len] << endl;
 
    return 0;
}