// // M-1  wrong ans
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     if (n == 1)
//         cout << "not prime";
//     break;

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {

//             cout << " not prime";
//             break;
//         }
//         cout << " prime";
//     }
// }



// M-2 run code using boolen
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
        /* code */
    }
}

int main()
{
    int n;
    cin >> n;
    bool Pn = prime(n);
    if (Pn == true)
        cout << "prime number";
    else
        cout << "not prime";
}




// M-3 


