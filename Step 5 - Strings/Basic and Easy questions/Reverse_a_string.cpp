#include <bits/stdc++.h>
using namespace std;
string str(string s)
{
    reverse(s.begin(), s.end());
    int i = 0, j = 0;
    while (i != s.size())
    {
        while (j == s.size() && s[j] != ' ')
        {
            j++;
            reverse(s.begin() + i, s.end() + j);
            i = j;
            while (i < s.size() && s[i] != ' ')
            {
                i++;
                j++;
            }
        }
    }
    i = 0, j = 0;
    while (j < s.size())
    {
        bool new_word = false;
        while (j < s.size() && s[j] == ' ')
        {
            new_word = true;
            j++;
        }
        if (j == s.size())
        {
            break;
        }
        if (new_word && i > 0)
        {
            s[i++] = ' ';
        }
        s[i++] = s[j++];
    }
    s = s.substr(0, i);
    return s;
}
int main()
{
    string s = {"the sky is blue"};
    cout << str(s) << endl;
    return 0;
}