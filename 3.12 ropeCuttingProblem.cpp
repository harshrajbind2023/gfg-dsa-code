// // M-1 error                                   WATCHINg

//  #include <bits/stdc++.h>
// using namespace std;

// int maximumpieces(int n,int a,int b,int c){
//     if(n==0)return 0;
//     if(n<0)return 1;
//     int res=max(maximumpieces(n-a,a,b,c),maximumpieces(n-b,a,b,c),maximumpieces(n-c,a,b,c));
//     if(res==-1)return -1;
//     return res+1;
// }
// int main()
// {
//    int n,a,b,c;
//    cin>>n>>a>>b>>c;
//    cout<<maximumpieces(n,a,b,c);
// }

