#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if(n&(1<<(k-1))!=0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}