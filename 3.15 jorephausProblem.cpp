// // M-1  wrong ans

// #include<bits/stdc++.h>
// using namespace std;
// int jor(int n,int k){
//     if(n==0){return 0;}
//     return jor(n-1,k);
// }
// int main(){
//     int n,k;
//     cin>>n>>k;
//     cout<<jor(n,k);
// }

// M-2 run
#include<bits/stdc++.h>
using namespace std;
int jor(int n,int k){
    if(n==1){return 0;}
    return( jor(n-1,k)+k)%n;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<jor(n,k);
}