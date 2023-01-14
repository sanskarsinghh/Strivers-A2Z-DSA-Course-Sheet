#include <bits/stdc++.h>
using namespace std;
// This solution is passing all the test cases in Leetcode returning values in boolean format
bool check_palindrome(int n)
{
    int num = n;
    int reverse = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (reverse == n) return 1;
    else return 0;
}
int main()
{
    int n = -121; // n is transposable 
    if(check_palindrome(n)) cout << "True";
    else cout << "False" << endl;
    return 0;
}