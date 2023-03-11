#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{
    int mid;
    int low = 0, high = n - 1;
    if (arr[low] <= arr[high])
        return 0;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (arr[mid] >= arr[0])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}
int main()
{
    int arr[] = {5, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solution(arr, n);
    return 0;
}