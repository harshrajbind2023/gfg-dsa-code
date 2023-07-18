#include<bits/stdc++.h>
using namespace std;
int main(){
    int res,rem,temp,num;
    cin>>num;
    temp=num;
    res=0;
    while (temp!=0)
    {
        /* code */
        rem=temp%10;
        res=res*10+rem;
        temp=temp/10;

    }
    if (num==res)
    {
        cout<<"palindrome";
        /* code */
    }
    else
          cout<<"not palindrome";
    
    
}