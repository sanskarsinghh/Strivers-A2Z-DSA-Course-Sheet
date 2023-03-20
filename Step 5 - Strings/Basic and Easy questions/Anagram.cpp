#include <bits/stdc++.h>
using namespace std;
bool solution(string s1, string s2)
{
    int size1 = s1.length();
    int size2 = s2.length();
    int freq[26] = {0};
    if (size1 != size2)
    {
        return false;
    }
    for (int i = 0; i < size1; i++)
    {
        freq[s1[i] - 'A']++;
    }
    for (int i = 0; i < size1; i++)
    {
        freq[s2[i] - 'A']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[s1[i]] != 0)
            return false;
    }
    return true;
}
int main()
{
     string Str1 = "INTEGER";
  string Str2 = "TEGERNI";
  if(solution(Str1, Str2))
  cout << "True" << endl;
  else
  cout<<"False"<<endl;
  return 0;
    return 0;
}