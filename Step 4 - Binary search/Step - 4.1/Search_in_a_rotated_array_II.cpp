#include <bits/stdc++.h>
using namespace std;
bool solution(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
         int mid = (low+mid) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && arr[mid] >= target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (arr[mid] <= target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
}
int main()
{
    int arr[] = {2, 5, 6, 0, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    cout << solution(arr, n, target) << endl;
    return 0;
}