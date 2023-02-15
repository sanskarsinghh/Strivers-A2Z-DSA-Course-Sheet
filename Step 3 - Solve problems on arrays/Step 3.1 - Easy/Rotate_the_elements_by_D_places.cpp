#include <bits/stdc++.h>
using namespace std;
void solution(int arr[], int n, int k)
{
    for (int i = n-1; i >= 0; i--)
    {
        arr[i] = arr[i-k];
    }
    for (int l = 0; l < n; l++)
    {
        cout << arr[l] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; // Output = {6 7 1 2 3 4 5}
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    solution(arr, n, k);
    return 0;
}