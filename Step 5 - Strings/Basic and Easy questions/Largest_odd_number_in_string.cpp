#include <bits/stdc++.h>
using namespace std;
string solution(string s, int size)
{
    for (int i = 0; i < size; i++)
    {
    if (s[i] & 1)
        return s.substr(0,i+1);
    return "";
    }
}
int main()
{
    string s = "52";
    int size = s.length();
    cout << solution(s,size) << endl;
    return 0;
}