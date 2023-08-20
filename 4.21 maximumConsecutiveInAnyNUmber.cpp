//   M-1  wrong
#include<bits/stdc++.h>
using namespace std;
int maximumConsecutiveInAnyNUmber(int arr[], int n){
    int count1=0;
    for(int i=0;i<n;i++){
        int count2=0;
          for(int j=i+1;j<n;j++){
            if(arr[i]!=arr[j]){
                return 0;
            }
            count2++;
        
        }
        count1=max(count1,count2);

    }
    return count1;
}      

int main(){
    int arr[5]={1,0,1,1,1};
    int n=5;
    cout<<maximumConsecutiveInAnyNUmber(arr, n);
}