//  m-1 run
#include<bits/stdc++.h>
using namespace std;
int profitMax(int arr[],int start,int end){
    int profit=0;
    if(start>=end){
        return 0;
    }
    for(int i=start;i<=end;i++){
        for(int j=i+1;j<=end;j++){
           if(arr[j]>arr[i]){
             int currprofit=arr[j]-arr[i] + profitMax(arr,start,i-1)+ profitMax(arr,j+1,end);
             profit=max(profit,currprofit);
           }
        }
    }
    return profit;
}

int main(){
    int arr[3]={ 10,20,30};
    int start=0,end=2;
    cout<<profitMax(arr,start,end);
}



 //   M-2  run
 #include<bits/stdc++.h>
using namespace std;
int profitMax(int arr[],int start,int end){
    int profit=0;
    
    for(int i=start+1;i<=end;i++){
        if(arr[i]>arr[i-1]){
            profit += (arr[i]-arr[i-1]);
             
           }
    }
    return profit;
}

int main(){
    int arr[3]={ 10,20,30};
    int start=0,end=2;
    cout<<profitMax(arr,start,end);
}
