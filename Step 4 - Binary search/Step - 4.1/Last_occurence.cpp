#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 4, 13, 13, 13, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 13;
    // Simple solution using Upper_bound algorithm in STL library. It is a faster way to implement BinarySearch.
    int ind = upper_bound(arr, arr + n, k) - arr; 
    ind--;
    if (ind >= 0)
        cout << ind << endl;
    return 0;
}