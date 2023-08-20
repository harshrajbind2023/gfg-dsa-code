#include<bits/stdc++.h>
using namespace std;
int mcs(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int currmax=arr[i];
        int currsum=arr[i];
        for(int j=1;j<n;j++){
            int index=(i+j)%n;  //
            currsum +=arr[index];
            currmax=max(currsum,currmax);
        }
        res=max(res,currmax);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mcs(arr,n);


}



//   m-2