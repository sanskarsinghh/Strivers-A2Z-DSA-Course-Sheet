#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n) // Time complexity = O(N^2)
{
    int maxpro = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
                maxpro = max(arr[j] - arr[i], maxpro);
        }
    }
    return maxpro;
}
int solution1(int arr[], int n) //Time complexity = O(N)
{
    int maxprice = 0;
    int minprice = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minprice = min(minprice, arr[i]);
        maxprice = max(maxprice, arr[i]- minprice);
    }
    return maxprice;
}
int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << solution(arr, n);
    cout << solution1(arr, n);
    return 0;
}