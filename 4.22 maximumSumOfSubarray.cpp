//    M-1  run

#include<bits/stdc++.h>
using namespace std;
int maximumsum(int arr[], int n);
int main(){
     int arr[5]={-1,0,1,1,6};
    int n=5;
    cout<<maximumsum(arr, n);
}
int maximumsum(int arr[], int n){
       int res=arr[0];
          for(int j=0;j<n;j++){
             int curr=0;
            for(int i=j;i<n;i++){
                curr=curr+arr[i];
                res=max(res,curr);
            }
    }

 return res;
}
   


