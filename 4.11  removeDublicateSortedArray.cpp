#include <bits/stdc++.h>
using namespace std;

void removeDublicateSortedArray(int arr[], int n)
{
    int temp[n];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    cout << "after remove Dublicate Sorted Array" << endl;
    for (int i = 1; i < res; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{

    int n;
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    removeDublicateSortedArray(arr, n);
}