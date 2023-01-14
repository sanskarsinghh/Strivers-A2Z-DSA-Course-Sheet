#include <bits/stdc++.h>
using namespace std;
int count_digits(int n) // Question uploaded on GFG
{
    int x = n, count = 0;
    while (x > 0)
    {
        int last = x % 10;
        if (last != 0 && n % last == 0)
        {
            count++;
        }
        x / 10;
    }
    return count;
}

// Question uploaded on the article by Striver
int count_digits1(int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    int n = 12;
    cout << count_digits(n);
    cout << count_digits1(n);

    return 0;
}