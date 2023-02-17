#include <bits/stdc++.h>
using namespace std;
void Reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void solution(int arr[], int n, int k)
{
    Reverse(arr, 0, n - k - 1);
    Reverse(arr, n - k, n - 1);
    Reverse(arr, 0, n - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    solution(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}