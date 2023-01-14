#include <bits/stdc++.h>
using namespace std;
// This solution is passing 1027 / 1032 test cases in Leetcode returning values in 32-bit integer format
int main()
{
    int n = 1345, reverse = 0, digit, num; // n is transposable
    while (n != 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if (reverse < -2 ^ 31 && 2 ^ 31 - 1)
    {

        cout << reverse << endl;
    }
    else
    {
        return 0;
    }

    return 0;
}