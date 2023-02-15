#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{
    sort(arr, arr+n);
    int a, b;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1]){
            a = arr[i-1];
        }
        if(arr[i+1] != arr[i] + 1){
            b = arr[i] - 1;
        }
    }
    int q[] = {a, b};
    cout << "The number which is repeating is "<< q[0] << endl;
    cout << "The number which is missing is "<< q[1] << endl;
}
int main()
{
    int arr[] = {3, 1, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    solution(arr, n);
    return 0;
}