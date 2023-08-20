//   m-1
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int x){
    int i=0;
    while(true){
      if(arr[i]==x)return i;
      if(arr[i]>x)return -1;
      i++;
    }
}
int main(){
  int arr[]={1,4,6,38,34};
  int x;
  cin>>x;
  cout<<search(arr,x);
}



