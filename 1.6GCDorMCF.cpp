//   M-1 run code      addition
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    cout << a;
}
}




// // M-2  not run code
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int a,b,res;
//   cin>>a>>b;
//   res=min(a,b);
//   while (a!=b)
//   {
//     res--;
//     /* code */
//   }
//   cout << res;

// }



//  M-2 run code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, res;
    cin >> a >> b;
    res = min(a, b);
    while (res > 0)
    {
        res--;
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        /* code */
    }
    cout << res;
}