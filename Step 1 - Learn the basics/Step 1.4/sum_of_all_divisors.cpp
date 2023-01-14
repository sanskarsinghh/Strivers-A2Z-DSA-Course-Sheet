#include <bits/stdc++.h>
using namespace std;
void sum(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) count++;
    }
    if(count == 2) cout << "Prime";
    else cout << "Not-Prime";
}
int main()
{
    int n = 13;
    sum(n);
    return 0;
}