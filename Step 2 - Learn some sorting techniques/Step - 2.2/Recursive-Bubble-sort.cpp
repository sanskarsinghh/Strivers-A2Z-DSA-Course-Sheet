#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void Recursive_Bubble_Sort(int arr[], int n) //Call it recursive Bubble_Sort or Call it Optimized_Bubble_Sort it uses the same concept,time complexity and space.
{
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            swapped = true;
        }
        if (swapped == false)
            break;
    }
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    Recursive_Bubble_Sort(arr, n);
    display(arr, n);
    return 0;
}