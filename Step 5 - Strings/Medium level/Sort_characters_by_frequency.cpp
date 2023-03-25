#include <bits/stdc++.h>
using namespace std;
string solution(string s)
{
    string ans = "";
    unordered_map<char, int> ump;
    for (auto x : s)
    {
        ump[x]++;
    }
    priority_queue<pair<char, int>> pq;
    for (auto x : ump)
    {
        pq.push({x.second, x.first});
    }
    while (!pq.empty())
    {
        auto p = pq.top();
        pq.pop();
        while (p.first--)
        {

            // ans += pq.second;
        }
    }
    return ans;
}
int main()
{
    string s = {"tree"};
    cout << solution(s) << endl;
    return 0;
}