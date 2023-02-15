#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{
    for (int i = 1; i <= n; i+=2)
    {
        if (arr[i] != arr[i - 1])
        {
            return arr[i-1];
        };
    }
}
int main()
{
    int arr[] = {2, 2, 3, 3, 4, 4, 27, 27, 32, 32, 36, 36, 41, 41, 42, 42, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solution(arr, n);
    return 0;
}