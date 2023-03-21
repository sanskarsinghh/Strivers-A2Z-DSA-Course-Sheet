#include <bits/stdc++.h>
using namespace std;
//displaying the array after sorting it
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
//Selection sort function takes an array and the size of the array and returns nothing
void selection_sort(int arr[], int n)
{
    int indexmin; //intialising the variable for the 
    for (int i = 0; i < n - 1; i++)
    {
        indexmin = i;
        for (int j = i + 1; j < n ; j++)
        {
            if (arr[j] < arr[indexmin])
                indexmin = j;
        }
        int temp = arr[i];
        arr[i] = arr[indexmin];
        arr[indexmin] = temp;
    }
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    display(arr, n);
    return 0;
}