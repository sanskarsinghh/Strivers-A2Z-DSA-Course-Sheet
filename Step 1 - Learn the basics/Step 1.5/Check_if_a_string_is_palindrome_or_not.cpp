#include <bits/stdc++.h>
using namespace std;
bool solution(int i, string &str)
{

    if (i >= str.size() / 2)
        return true;
    if (str[i] != str[str.size() - i - 1])
        return false;
    return solution(i + 1, str);
}
int main()
{
    string str = "sanskar";
    if (solution(0, str))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}