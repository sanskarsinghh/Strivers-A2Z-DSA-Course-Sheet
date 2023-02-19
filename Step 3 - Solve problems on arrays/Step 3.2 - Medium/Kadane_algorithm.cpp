#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n) // O(N) time complexity
{
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxi = max(sum, maxi);
        if (sum < 0) sum = 0;
    }
    return maxi;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solution(arr, n);
    return 0;
}