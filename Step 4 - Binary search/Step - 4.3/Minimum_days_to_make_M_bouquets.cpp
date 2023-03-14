#include <bits/stdc++.h>
using namespace std;
bool operation(int arr[], int k, int m, int n, int mid)
{
    int flower = 0;
    int bouquet = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= mid)
        {
            flower++;
        }
        else
        {
            flower = 0;
        }
        if (flower <= k)
        {
            bouquet++;
            flower = 0;
        }
    }
    if (bouquet >= m)
        return true;
    else
        return false;
}
int solution(int arr[], int k, int m, int n)
{
    int low = *min_element(arr, arr + n);
    int high = *max_element(arr, arr + n);
    int result = -1;
    if (n <= k * m)
        return -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if(operation(arr,k,m,n,mid)) {
            result = mid;
            low = mid +1;
        }
        else high = mid -1;
    }
    return result;
}
int main()
{
    int arr[] = {1, 10, 3, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3, m = 1;
    solution(arr, k, m, n);
    return 0;
}