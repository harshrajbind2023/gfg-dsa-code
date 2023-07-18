#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rem,sum=0;
    cin>>n;
    while(n>0){
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    cout<<sum;
}