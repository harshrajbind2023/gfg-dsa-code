#include <bits/stdc++.h>
using namespace std;
bool palindrome(string str, int start, int end)
{

    if (start >= end)
    {
        return true;
    }
    return (str[start] == str[end]) && palindrome(str, start + 1, end - 1);
}

int main()
{
    string str = "pasap";
    int ln = str.length();
    int start = 0, end = ln - 1;
    if (palindrome(str, start, end))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}