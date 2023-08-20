//   m-1
#include<bits/stdc++.h>
using namespace std;
int wst(int arr[],int n,int k){
    int maxsum=INT_MIN;
    for(int i=0;i+k-1<n;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum +=arr[i+j];
        }
        maxsum=max(sum,maxsum);

    }
    return maxsum;
 
   }


int main(){
    int n;
     cout<<" no of element"<<endl;

    cin>>n;
    int arr[n];
    cout<<" array of element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<" enter of k value"<<endl;
    cin>>k;
  cout<<wst(arr,n,k);
}



//    m-2

#include<bits/stdc++.h>
using namespace std;
int wst(int arr[],int n,int k){
     int currsum=0;
       for(int j=0;j<k;j++){
            currsum +=arr[j];
        }
        int maxsum=currsum;
    for(int i=k;i<n;i++){
        currsum +=arr[i]-arr[i-k];
        maxsum=max(currsum,maxsum);
 
    }
    return maxsum;
 
   }


int main(){
    int n;
     cout<<" no of element"<<endl;

    cin>>n;
    int arr[n];
    cout<<" array of element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<" enter of k value"<<endl;
    cin>>k;
  cout<<wst(arr,n,k);
}


