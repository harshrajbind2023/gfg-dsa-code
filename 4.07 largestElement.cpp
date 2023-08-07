#include<bits/stdc++.h>
using namespace std;

int getlargest(int arr[],int n){
   
     int res=0;
     for (int  i = 0; i < n; i++)
     {
        if(arr[i]>arr[res])
              res=i;
        /* code */
     }
      
      return res;
}


int main(){

     int arr[5] = { 25, 10, 54, 15, 40 };  
      int n=sizeof(arr)/sizeof(arr[0]);
    cout<<getlargest(arr, n);
    
}



// M-2
// take input user
#include<bits/stdc++.h>
using namespace std;

int getlargest(int arr[],int n){
   
     int res=0;
     for (int  i = 0; i < n; i++)
     {
        if(arr[i]>arr[res])
              res=i;
        /* code */
     }
      
      return res;
}


int main(){

  int n;
   cin>>n;
  int arr[n];

  cout << "Enter "<<n<<" numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
    cout<<getlargest(arr, n);
    
}