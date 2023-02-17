#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n) // Returns the number of contiguous elemnents which sum out to be zero.
{
    unordered_map<int, int> mpp;
    int sum = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
                maxi = max(maxi, i - mpp[sum]);
            else
            {
                mpp[sum] = i;
            }
        }
    }
    return maxi;
};
int solution1(int arr[], int n, int k) // Returns the number of contiguous elemnents which sum out to be equal to K.
{
    int maxisum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
                maxisum = max(maxisum, (j - i + 1));
        }
    }
    return maxisum;
}
int main()
{
    int arr[] = {7, 1, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 7;
    // cout << solution(arr, n);
    cout << solution1(arr, n, k);
    return 0;
}