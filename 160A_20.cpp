#include <iostream>

using namespace std;

int partition(int* input, int p, int r)
{
    int pivot = input[r];

    while ( p < r )
    {
        while ( input[p] > pivot )
            p++;

        while ( input[r] < pivot )
            r--;

        if ( input[p] == input[r] )
            p++;
        else if ( p < r )
        {
            int tmp = input[p];
            input[p] = input[r];
            input[r] = tmp;
        }
    }

    return r;
}

void quicksort(int* input, int p, int r)
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
    int n;
    int coins[110][110]={0};
    int total=0,coinCount=0,coinSum=0;

    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> coins[0][i];
        total+=coins[0][i];
    }

    total/=2;

    quicksort(coins[0],0,n-1);

    for(int i=0;i<n;i++)
    {
        coinSum+=coins[0][i];
        coinCount++;
        if (coinSum>total)
            break;
    }

    cout << coinCount << endl;
    return 0;
}