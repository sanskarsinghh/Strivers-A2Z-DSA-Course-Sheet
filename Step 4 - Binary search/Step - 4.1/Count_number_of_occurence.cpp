#include <bits/stdc++.h>
using namespace std;
int binary(int arr[], int n, int target)
{
    int lo = 0;
    int hi = n - 1;
    while (lo < hi)
    {
    int mid = (lo + hi) / 2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] > target) lo = mid +1;
    else if(arr[mid] < target) hi = mid - 1;
    }
    return -1;
}
int idxchk(int arr[], int n, int target) // TC - O(log(n))
{
    int idx = binary(arr, n, target);
    int k = 1;
    int left = idx - 1;
    int right = idx + 1;
    while(left >= 0 && arr[left] == target) {k++; left--;}
    while(right < n && arr[right] == target){k++; right++;}
    return k;
}
int main()
{
    int arr[] = {2, 2, 3, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    // cout << binary(arr, n, target);
    // cout << idxchk(arr, n, target);

    

    // Another approach using lower_bound function in STL to get the frequency of the target in the given array.
    int ind = lower_bound(arr, arr+n, target) - arr;
    int i = ind;
    while(i < n && arr[i] == target){i++;}
    cout << i-ind;
    return 0;
}