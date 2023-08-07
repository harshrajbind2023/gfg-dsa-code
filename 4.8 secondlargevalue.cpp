#include <bits/stdc++.h>
using namespace std;

int getlargest(int arr[], int n)
{

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
            res = i;
        /* code */
    }

    return res;
}
int secondLargest(int arr[], int n)
{

    int largest = getlargest(arr, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (res == -1)
            {
                return i;
            }
            else if (arr[i] > arr[res])
            {
                return i;
                /* code */
            }
        }
    }
    return res;
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
    cout << getlargest(arr, n);
}