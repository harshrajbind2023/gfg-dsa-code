//   m-1

#include<bits/stdc++.h>
using  namespace std;

int squareRoot(int n){
  int i=0;
  while(i*i<=n){
    i++;
  }
  return i-1;

}
int main(){
  int n;
  cin>>n;
  cout<<squareRoot(n);
}



//   m-2
#include<bits/stdc++.h>
using  namespace std;

int squareRoot(int n){
  int low=1,high=n,ans=-1;
  while(low<=high){
    int mid=(low+high)/2;
    int sqr=mid*mid;
    if(sqr==n){
      return mid;
    }
    else if(sqr>n){
        high=mid-1;
    }
    else{
      low=mid+1;
      ans=mid;
    }
  }
  return ans;
}
int main(){
  int n;
  cin>>n;
  cout<<squareRoot(n);
}
