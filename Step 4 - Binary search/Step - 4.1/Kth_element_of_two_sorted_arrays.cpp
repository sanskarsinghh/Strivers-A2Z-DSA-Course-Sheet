#include <bits/stdc++.h>
using namespace std;
int solution(int arr1[], int n, int arr2[], int m, int k)
{
    if (m > n)
    {
        return solution(arr2, m, arr1, n, k);
    }
    int low = 0;
    int high = n - 1;

    int cut1 = (low + high) / 2;
    int cut2 = k - cut1;

    int left1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
    int left2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];

    int right1 = cut1 == 0 ? INT_MAX : arr1[cut1];
    int right2 = cut2 == 0 ? INT_MAX : arr2[cut2];

    while (low < high)
    {
        int mid = (low + high) / 2;
        if (left1 < right2 && left2 < right1)
        {
            return max(left1, left2);
        }
        else if (left1 < right1)
        {
            high = cut1 - 1;
        }
        else
        {
            low = cut1 + 1;
        }
    }
    return 1;
}
int main()
{
    int arr[] = {2,3,6,7,9};
    int arr[] = {1,4,8,10};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    return 0;
}