#include <bits/stdc++.h>
using namespace std;
int linearsearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k) return i;
    }
        return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 7;
    cout << linearsearch(arr, n,k);
    return 0;
}