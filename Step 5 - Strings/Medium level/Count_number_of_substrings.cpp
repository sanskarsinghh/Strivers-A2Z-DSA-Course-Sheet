#include <bits/stdc++.h>
using namespace std;
int solution(string s, int k)
{
    int n = s.length();
    int res = 0;
    int cnt[26];
    for (int i = 0; i < n; i++)
    {
        int dist_count = 0;
        memset(cnt, 0, sizeof(cnt));
        for (int j = i; j < n; j++)
        {
            if(cnt[s[j] - 'a'] == 0) dist_count++;  
            cnt[s[j] - 'a']++;
            if(dist_count == k)res++;    
        }
    }
    return res;
}
int main()
{
    string s = {"abaaca"};
    int k = 1;
    cout << solution(s,k) << endl;
    return 0;
}