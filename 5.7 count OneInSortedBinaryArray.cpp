//   m-1 wrong

#include<bits/stdc++.h>
using namespace std;

int count(int arr[],int n){
    int f=0,l=n-1;
  
  while(f<=l){
     int mid=(f+l)/2;

    if(arr[mid]==0){
      f=mid+1;
    }
    else{
     if(mid=0||arr[mid-1]==0){
        return (n-mid);

      }
      else{
         l=mid-1;
     }

    }

  }
  return 0;
}


int main(){
    int n;
    cout<<"no. of element"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter of array element"<<endl;
    for(int i=0;i<n;i++){
      cin>>arr[i];        
    }
 
    cout<<count(arr,n);
}