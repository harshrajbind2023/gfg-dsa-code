// // M-1   error

// #include<bits/stdc++.h>
// using namespace std;
// void toh(int n,char a,char b,char c){
//   if(n==1){
//      cout<<"move from "<<a<<'to'<<c;
//      return;
//   }
//   toh(n-1,a,c,b);
//   cout<<"move"<<n<<"from"<<a<<"to"<<c;
//   toh(n-1,b,a,c);
// }

// int main(){
//   int n;
//   char a,b,c;
//   cin>>n>>a>>b>>c;
//   toh(n,a,b,c);
//  }