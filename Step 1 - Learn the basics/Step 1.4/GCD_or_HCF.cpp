#include <bits/stdc++.h>
using namespace std;
int hcf(int n, int m)
{
    if (m == 0)
    {
        return n;
    }
    else
        return hcf(m, n % m);
}
int lcmandgcd(int n, int m)
{
    vector<long long> vec1(2);
    vec1[1] = hcf(n, m);
    vec1[0] = (n * m) / vec1[1];

    // return vec1;
}
int main()
{
    int n = 4, m = 3;
    vector<long long> ans;
    lcmandgcd(n, m);
    return 0;
}