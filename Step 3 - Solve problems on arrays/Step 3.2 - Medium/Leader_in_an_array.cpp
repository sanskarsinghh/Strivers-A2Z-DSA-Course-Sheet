#include <bits/stdc++.h>
using namespace std;
void solution(int arr[], int n) // O(n^2) solution - Brute force solution
{

    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
                leader = false;
            break;
        }
        if (leader)
        {
            cout << arr[i] << " ";
        }
    }
    // cout << arr[n - 1] << endl;
}
void solution1(int arr[], int n) // O(N^2) solution - Optimal solution
{
    int max = arr[n - 1];
    cout << arr[n-1] << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if(arr[i] > max) cout << arr[i] << " ";
        max = arr[i];
    }

}
int main()
{
    int arr[] = {4, 7, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    // solution(arr, n);
    solution1(arr, n);
    return 0;
}