#include<bits/stdc++.h>
using  namespace std;

int search(int arr[],int n,int x){
  int low=1,high=n;
  while(low<=high){
    int mid=(low+high)/2;
    
    if(x==arr[mid]){
      return mid;
    }
    // left half sorted
    else if(arr[low]<arr[mid]){
       if(x>=arr[low]&&x<arr[mid]) high=mid-1;
       else low=mid+1;
    }
    // right half sorted
    else{
      if(x>arr[mid]&&x<=arr[high]) return low=mid+1;
      else high=mid-1;
    }
  }
  return -1;
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
  cout<<search(arr,n,x);
}
