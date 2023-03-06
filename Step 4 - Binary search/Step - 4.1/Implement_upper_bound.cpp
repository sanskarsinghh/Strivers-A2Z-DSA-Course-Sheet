#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n, int x) //Using STL
{
    sort(arr,arr+n);
    int ind = upper_bound(arr, arr + n, x) - arr;
    int ind1 = lower_bound(arr, arr + n, x) - arr;
    ind1--;
    if(ind<n){cout <<"Upper bound : "<<  arr[ind] << endl;}
    else return -1;
    if(ind1>=0) {cout << "Lower bound : "<< arr[ind1] << endl;}
    else return -1;
}
int main()
{
    int arr[] = {5, 6, 8, 9, 6, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    solution(arr, n, x);
    return 0;
}