// M-1    wrong
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
        n = n / 2;
    }
}


// M-2 wrong
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            cout << "yes";
            break;
        }

        n = n / 2;
    }
    cout << "no";
}

// M-3 wrong
#include <bits/stdc++.h>
using namespace std;
bool isPow2(int n){
    while (n!=1)
    {
        if(n%2!=0){
            return false;
           
        }
         n=n/2;
       
        /* code */
    }
 return true;
    
}
int main()
{
    int n;
    cin >> n;
   if(isPow2(n)){
      cout<<"yes";
   }
  cout<<"no";

}

/// M -4  right
#include <bits/stdc++.h>
using namespace std;
bool isPow2(int n){
    while (n!=1)
    {
       if(n==0){
        return false
       }
       return (n&(n-1)==0)
    
}
int main()
{
    int n;
    cin >> n;
   if(isPow2(n)){
      cout<<"yes";
   }
  cout<<"no";

}
