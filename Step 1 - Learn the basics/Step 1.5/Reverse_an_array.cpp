#include <bits/stdc++.h>
using namespace std;
void display(int arr[5], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void solution(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        solution(arr, start + 1, end - 1);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5, start = 0, end = n - 1;
    solution(arr, start, end);
    display(arr, n);
    return 0;
}