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
#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}




// M-4 
#include <iostream>
using namespace std;

bool check_prime(int);

int main() {

  int n;

  cout << "Enter a positive  integer: ";
  cin >> n;

  if (check_prime(n))
    cout << n << " is a prime number.";
  else
    cout << n << " is not a prime number.";

  return 0;
}

bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}


