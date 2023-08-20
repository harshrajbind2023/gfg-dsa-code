// M-1  wrong
#include <bits/stdc++.h>
using namespace std;
int maximumDiffarence(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        res = max(res, arr[j] - arr[i]);
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
    cout << maximumDiffarence(arr, n) << endl;
}




//   M-2  run
#include <bits/stdc++.h>
using namespace std;
int maximumDiffarence(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            res = max(res, arr[j] - arr[i]);
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
    cout << maximumDiffarence(arr, n) << endl;
}



//  M-3  run
#include <bits/stdc++.h>
using namespace std;
int maximumDiffarence(int arr[], int n)
{
    int minv = arr[0];
    int res = arr[1] - arr[0];
    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minv);
        minv = min(minv, arr[j]);
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
    cout << maximumDiffarence(arr, n) << endl;
}