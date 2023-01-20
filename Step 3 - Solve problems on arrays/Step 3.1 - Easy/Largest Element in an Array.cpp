#include <bits/stdc++.h>
using namespace std;
int Largestelement(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[n - 1];
}
int main()
{
    int arr[] = {90,46,2,33,69};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Largestelement(arr, n);
    return 0;
}