#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertion_sort(int arr[], int n)
{
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j > -1 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;    
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    display(arr, n);
    return 0;
}