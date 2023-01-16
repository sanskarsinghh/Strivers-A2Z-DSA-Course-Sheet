#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void Bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
void Optimized_Bubble_sort(int arr[], int n) // Optimized Bubble_sort traces the already sorted array and break it's loop
{
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
            swapped = true;
        }
        if(swapped == false) break;
    }
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    Bubble_sort(arr, n);
    Optimized_Bubble_sort(arr,n);
    display(arr, n);
    return 0;
}