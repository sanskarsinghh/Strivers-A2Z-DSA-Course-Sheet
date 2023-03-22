#include <bits/stdc++.h>
using namespace std;
string solution(string s)
{
    if(s.empty()) return "";
    sort(s.begin(), s.end());
    string a = s[0];
    string b  = s.back();
    int i = 0;
    for(; i<min(a.size(), b.size()); i++){
        if(a[i] != b[i]) break;
    }
    return a.substr(0,i);
}
int main()
{
    string s = {"flower","flow","flight"}
    solution(s);
    return 0;
}