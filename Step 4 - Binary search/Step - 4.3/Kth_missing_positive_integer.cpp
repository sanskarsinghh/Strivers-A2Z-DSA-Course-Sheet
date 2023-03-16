#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] - mid - 1 < k) low = mid + 1; // checking where missingNum lies
            else high = mid - 1;
        }
        return low + k; // return the kth missing element
}
int main()
{
    int arr[] = {2, 3, 4, 7, 11};
    int k = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solution(arr, n, k);
    return 0;
}