#include <bits/stdc++.h>
using namespace std;
int multiply(double number, int n)
{
    int ans = 1.00;
    for (int i = 0; i < n; i++)
    {
        ans = ans * number;
    }
    return ans;
}
void solution(int n, int m)
{
    double low = 0;
    double high = m;
    double esp = 1e - 7;
    while ((high - low) > esp)
    {
        int mid = (low + high) / 2;
        if(multiply(mid,n) > esp) low = mid;
        else high = mid;
    }
    cout << low << endl;
}
int main()
{
    int n = 3, m = 27;
    solution(n, m);
    return 0;
}