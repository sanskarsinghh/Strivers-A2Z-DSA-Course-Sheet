#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{   int k;
    sort(arr, arr+n);
    for (int i = 0; i <= n; i++){
        if(arr[i+1] != arr[i] + 1) int k = arr[i+1];
    }
    return k;
}
int main()
{
    int arr[] = {3, 1, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solution(arr, n);
    return 0;
}