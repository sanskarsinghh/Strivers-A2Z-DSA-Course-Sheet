#include <bits/stdc++.h>
using namespace std;
int solution(int n)
{
    if (n > 0)
    cout << n << endl;
    solution(n - 1);
}
int main()
{
    int n = 5;
    solution(n);
    return 0;
}