#include <bits/stdc++.h>
using namespace std;
int solution(int n)
{
    if(n>1)
    solution(n-1);
    cout << "Sanskar" << endl;
}
int main()
{
    int n = 20;
    solution(n);
    return 0;
}