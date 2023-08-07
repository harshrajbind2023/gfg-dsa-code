#include <bits/stdc++.h>
using namespace std;

void  reverse(int arr[],int n){
    int low=0,high=n-1;
    while (low<high)
    {
        int temp;
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;   
         low++;
         high--;
        /* code */
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
   reverse(arr, n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<"";
   }
}