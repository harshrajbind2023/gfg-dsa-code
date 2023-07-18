#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
  int res=1;
  for(int i=0;i<n;i++){
    res=res*x;
  }
  cout<<res;
}
int main(){
    int x,n;
    cin>>x>>n;
     power(x,n);
}