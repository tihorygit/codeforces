#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

void quickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] > pivot)
            i++;
        while (arr[j] < pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int main(int argc, char** argv) {

    int si[200000];
    int n;

    cin >> n;
    for(int i=0;i<n;i++)
        cin >> si[i];
    quickSort(si,0,n-1);

    int i=0;
    int j=n-1;

    int count = 0,four;

    while (i<=j)
    {
        count++;

        four=4-si[i];
        while(i<j)
        {
            if (four>=si[j])
            {
                four-=si[j];
                j--;
            } else break;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}
 