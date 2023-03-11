#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n) // TC : O(log(n))
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if(mid == 0) return arr[0] > arr[1] ? arr[0] : arr[1];
        if(mid == n-1) return arr[n-1] > arr[n-2] ? arr[n-1] : arr[n-2];
        if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid-1]) return mid; // Checking if mid is greater than it's neighbors
        if(arr[mid] < arr[mid-1]) high = mid - 1; // Checking the left side of the array for the peak element
        else low = mid + 1; // Checking the right side of the array for the peak element
    }
    return low; // Return the answer as low
}
int solution1(int arr[], int n) // TC : O(log(n))
{
    int low = 0;
    int high = n - 1;
    while (low < high) //much shorter code than the above solution, it is easy to understand as well
    {
        if(arr[low] < arr[high]) low++;
        else high--;
    }
    return low; // Return the answer as low
}
int main()
{
    int arr[] = {1, 2, 1, 3, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solution1(arr, n);
    return 0;
}