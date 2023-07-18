// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, fact =1, res=0;
//     cin >> n;
//     if (n == 0)
//     {
//         fact = 1;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//         /* code */
//     }
//     // while (fact % 10 == 0)
//     // {
//     //     res++;
//     //     fact = fact / 10;
//     //     /* code */
//     // }

//     while (fact!=0)
//     {
//         if(fact%10==0){
//             res++
//         }
//         fact=fact/10;
//         /* code */
//     }
//     cout << res;
// }



//run code 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,fact=1,res=0;
    cin>>n;
    if(n==0){
        fact=1;
    }
     for(int i=2;i<=n;i++){
        fact=fact*i;
     }
     while (fact%10==0)
     {
        res++;
        fact=fact/10;
        /* code */
     }
     cout<<res;
}



//run code 2   best 100 run successfull
#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n,res=0;
    cin>>n;
    
     for(int i=5;i<=n;i=i*5){
        res=res+n/i;
     }
    cout<<res;
}       