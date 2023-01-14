#include <bits/stdc++.h>
using namespace std;
bool armstrong_numbers(int n)
{
    int sum=0,num=n;
    while (num!=0)
    {
        int x = num%10;
        num /= 10;
        sum+=(x*x*x);
    }

    if (sum == n)
        return 1;
    else
        return 0;
}
int main()
{
    int n = 407;
    if (armstrong_numbers(n) == 1)
    {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}