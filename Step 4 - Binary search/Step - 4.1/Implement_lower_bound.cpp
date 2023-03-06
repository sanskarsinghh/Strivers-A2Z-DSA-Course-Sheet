#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n, int x) // Iterative solution
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

void solution2(int arr[], int n, int x) // Using STL to calculate the floor value
{
    int ind = lower_bound(arr, arr + n, x) - arr;
    ind--;
    if(ind>=0) cout << arr[ind] << endl;
    else cout << -1;
}

int main()
{
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    // cout << solution(arr, n, x) << endl;
    solution2(arr, n, x);
    return 0;
}