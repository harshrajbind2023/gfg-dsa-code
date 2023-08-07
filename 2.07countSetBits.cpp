// M-1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res=0;
    cin>>n;
    while (n>0)
    {
        if(n&1!=0){
            res++;
        }
       n= n>>1;
        /* code */
    }
    cout<<res;
    
    
}


// M-2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res=0;
    cin>>n;
    while (n>0)
    {
        if(n%2!=0){
            res++;
        }
       n= n/2;
        /* code */
    }
    cout<<res;
    
    
}

// M-3
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res=0;
    cin>>n;
    while (n>0)
    {
      n=n&(n-1);
      res++;  
     
    }
    cout<<res;
    
    
}