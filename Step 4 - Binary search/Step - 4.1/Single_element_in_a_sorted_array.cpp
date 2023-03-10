#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{
    int lo = 0;
    int hi = n - 1;
    if (n == 1)
    {
        return arr[lo];
    }
    else
    {
        while (lo<=hi)
        {
            int mid = (lo + hi)/2;
            if(arr[mid] == arr[mid^1]) lo = mid + 1;
            else hi = mid - 1;
        }
        return arr[lo];
    }
}
int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solution(arr, n);
    return 0;
}