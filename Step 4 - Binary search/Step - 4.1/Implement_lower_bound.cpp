#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n, int x)
{
    int ans = -1;
    int low = 0;
    int high = (n - 1);
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (x == arr[mid])
        {
            ans = mid;
            return ans;
            break;
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
        }
        else if (x > arr[mid])
        {
            if (ans < arr[mid])
            {
                ans = mid;
            }
            low = mid + 1;
        }
    }
        return ans;
}
int main()
{
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8;
    cout << solution(arr, n, x) << endl;
    return 0;
}