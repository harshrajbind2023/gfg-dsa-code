//   M-1    wrong
#include <bits/stdc++.h>
using namespace std;

void frequencies(int arr[], int n)
{
    int fre = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                fre++;
            }
            cout << arr[i] << "->" << fre << endl;
            fre = 1;
        }
         
          if(n==1||arr[n-1]!=arr[n-2]){
         cout<<arr[n-1]<<"->"<<1<<endl;
    }
    }
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    frequencies(arr, n);
}





// M-2  run
#include <bits/stdc++.h>
using namespace std;

void frequencies(int arr[], int n)
{
    int fre=1,i=1;
    while (i<n)
    {
        while(i<n&&arr[i]==arr[i-1]){
            fre++;
            i++;
        }
        cout<<arr[i-1]<<"->"<<fre<<endl;
        i++;
        fre=1;
       
    }
    if(n==1||arr[n-1]!=arr[n-2]){
         cout<<arr[n-1]<<"->"<<1<<endl;
    }
}
int main()
{

    int n;
    cin >> n;
    cout<<" enter "<<n<<" number"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    frequencies(arr, n);
}
