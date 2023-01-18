#include <bits/stdc++.h>
using namespace std;
bool check(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {11, 2, 3, 4, 7, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (check(arr, n))
        cout << "True";
    else
        cout << "False";
    return 0;
}