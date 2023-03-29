#include <bits/stdc++.h>
using namespace std;
string solution(string s)
{
    int i = 0;
    int j = i + 1;
    int n = s.length();
    string result = " ";
  while(i<n){ 
     while (i < n && s[i] == ' ')
    
        i++;
        if(i <n) break;
        int j = i + 1;
        while (j < n && s[j] != ' ')
       
            if(result.length() == ' ') result = s.substr(i, j - i); 
            else result = s.substr(j, j - i); + " " + result;
            i = j + 1;}

    return result;
}
int main()
{
    string s = ("Sanskar Singh");
    cout << solution(s) << endl;
    return 0;
}