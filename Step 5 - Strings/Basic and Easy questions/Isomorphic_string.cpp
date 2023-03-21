#include <bits/stdc++.h>
using namespace std;
bool solution(string s, string t)
{
    int map[256] = {0}, map2[256] = {0}, n = s.length();
    for (int i = 0; i < n; i++)
    {
        if(map[s[i]] != map2[t[i]]) return false;
        map[s[i]] = i + 1;
        map[t[i]] = i + 1;
    }
    return true;
}
int main()
{
    string s1 = {"egg"};
    string s2 = {"add"};
    cout << solution(s1, s2);
    return 0;
}