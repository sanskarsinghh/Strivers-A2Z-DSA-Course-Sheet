#include <bits/stdc++.h>
using namespace std;
int solution(string str)
{
    int count = 0;
    int max_count = INT_MIN;
    int n = str.length();
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == '(')
        {
            count++;
        }
        if (str[i] == ')')
        {
            count--;
        }
        max_count = max(max_count, count);
    }
    return max_count;
}
int main()
{
    string s = {"(1+(2*3)+((8)/4))+1"};
    cout << solution(s) << endl;
    return 0;
}