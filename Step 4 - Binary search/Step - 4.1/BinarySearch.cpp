#include <bits/stdc++.h>
using namespace std;
// Iterative implementation
void BinarySearch(int arr[], int n, int k) // Time complexity - O(log(n))   Space complexity - O(1)
{
    int start = 0;
    int end = n - 1;
    int mid, loc = -1;
    while (start <= n - 1)
    {
        mid = (start + end) / 2;
        if (arr[mid] < k)
            start = mid + 1;
        else if (arr[mid] > k)
            end = mid - 1;
        if (arr[mid] == k)
        {
            loc = mid;
            break;
        }
    }
    if (loc == -1)
        cout << "Not found" << endl;
    else
        cout << "Found " << k << " at : " << loc << endl;
}
// Recursive implemetation for BinarySearch
int BinarySearch_Recursively(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid, loc = -1;
    while (start <= n - 1)
    {
        mid = (start + end) / 2;
        if (k == mid)
            return mid;
        else if (arr[mid] > k)
            return BinarySearch_Recursively(arr, mid - 1, k);
        else
        {
            return BinarySearch_Recursively(arr, mid + 1, k);
        }
    }
    if (loc == -1)
        cout << "Not found" << endl;
    else
        cout << "Found " << k << " at : " << loc << endl;
}

int main()
{
    int arr[] = {2, 3, 7, 10, 13, 14, 17};
    int k = 14;
    int n = sizeof(arr) / sizeof(arr[0]);
    BinarySearch(arr, n, k);

    return 0;
}