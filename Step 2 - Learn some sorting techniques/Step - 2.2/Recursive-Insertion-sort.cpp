#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void Recursive_insertion_sort(int arr[], int n)
{
    int j, key;
    if (n <= 0) return;
    Recursive_insertion_sort(arr, n - 1);
    key = arr[n - 1];
    j = n - 2;
    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    Recursive_insertion_sort(arr, n);
    display(arr, n);
    return 0;
}