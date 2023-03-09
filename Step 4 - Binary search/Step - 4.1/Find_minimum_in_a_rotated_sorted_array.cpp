#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{
    int lo = 0;
    int hi = n - 1;
    while (lo < hi)
    {
        int mid = (lo+hi)/2;
        if(arr[mid] >= arr[hi]){lo = mid +1;}
        else{hi = mid;}
    }
    return arr[hi];
}
int main()
{
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solution(arr, n);
    return 0;
}