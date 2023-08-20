#include<bits/stdc++.h>
using  namespace std;

int peak(int arr[],int n){
  if(n==1)return arr[0];
  if(arr[0]>=arr[1]) return arr[0];
  if(arr[n-1]>=arr[n-2]) return arr[n-1];
  for(int i=0;i<n;i++){
    if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1]) return arr[i];
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
    cout<<"print peak value"; 
  cout<<peak(arr,n);
}
