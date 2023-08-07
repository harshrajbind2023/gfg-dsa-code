// m-1 wrong ans

#include<bits/stdc++.h>
using namespace std;  
int sumSub(int n,int arr,int sum){
    if(n==0)return (sum==0)?1:0;
    return sumSub(n-1,arr,sum) + sumSub(n-1,arr,sum-arr);
}

 int  main(){
  int sum=8 ,n=5,arr[n]={10,5,3,2,6};
  cout<<sumSub(n,arr[n],sum);

}

// M-2  not display ans
#include<bits/stdc++.h>
using namespace std;  
int sumSub(int n,int arr,int sum){
    if(n==0)return (sum==0)?1:0;
    return sumSub(n-1,arr,sum) + sumSub(n-1,arr,sum-arr);
}

 int  main(){
  int sum,n,arr[n];
  cin>>n>>sum;
  for (int i = 0; i <= n-1; i++)
  {
    cin>>arr[i];
    /* code */
  }
  
  cout<<sumSub(n,arr[n],sum);

}