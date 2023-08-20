// M-1   run
#include<bits/stdc++.h>
using namespace std;
int rainWater(int arr[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        int rmax=arr[i];
        for(int j=0;j<i;j++){
            rmax=max(rmax,arr[j]);
        }
        int lmax=arr[i];
        for(int j=i;j<n;j++){
            lmax=max(lmax,arr[j]);
        }
        res=res + min(rmax,lmax)-arr[i];
    }
    return res;
    }

int main(){
    int arr[5]={3,0,1,2,5};
    int n=5;
    cout<<rainWater(arr, n);
}




//    M-2  wrong
#include<bits/stdc++.h>
using namespace std;
int rainWater(int arr[], int n){
        int res=0;
         int rmax[n],lmax[n];

         lmax[0]=arr[0];
        for(int j=1;j<n;j++){
            lmax[j]=max(lmax[j],arr[j-1]);
        }

         rmax[n-1]= arr[n-1];
        for(int j=n-2;j>=0;j--){
            rmax[j]=max(rmax[j],arr[j+1]);
        }

        for(int i=1;i<n-1;i++){
             res=res + min(rmax[i],lmax[i])-arr[i];
        }
     
    return res;
    }

int main(){
    int arr[5]={3,0,1,2,5};
    int n=5;
    cout<<rainWater(arr, n);
}