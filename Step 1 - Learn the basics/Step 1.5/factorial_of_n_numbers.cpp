#include <bits/stdc++.h>
using namespace std;
int solution(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * solution(n - 1));
}
int main()
{
    int n = 3;
    cout << solution(n);
    return 0;
}