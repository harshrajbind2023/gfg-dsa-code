//   m-1 wrong

#include<bits/stdc++.h>
using namespace std;
int IndexFirst(int arr[],int f,int l,int x){

  while (f>l)
  {
   return -1;
  }
  while(f<=l){
     int mid=(f+l)/2;

    if(x>arr[mid]){
      f=mid+1;
    }

    else if(x<arr[mid]){
      l=mid-1;
    }

    else{
     if(mid=0||arr[mid-1]!=arr[mid]){
        return mid;

      }
      else{
         l=mid-1;
     }

    }

  }
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
    int x;
    cout<<"enter key value"<<endl;
    cin>>x;
     int f=0,l=n-1;
    cout<<IndexFirst(arr,f,l,x);
}