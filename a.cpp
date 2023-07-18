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