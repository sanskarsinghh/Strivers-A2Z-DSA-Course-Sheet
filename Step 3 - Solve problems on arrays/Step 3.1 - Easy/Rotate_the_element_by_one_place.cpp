#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{
    int m = arr[0];
    if(n == 0) return arr[n-1];
    else 
    for (int k = 0; k < n; k++)
    {
        arr[k] = arr[k+1];
    }
    arr[n-1] = m;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10}; // Output = {2,3,4,5,1}
    int n = sizeof(arr) / sizeof(arr[0]);
    solution(arr, n);
    return 0;
}