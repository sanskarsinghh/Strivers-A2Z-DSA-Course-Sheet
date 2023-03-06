#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]) return 0;
    }
        return 1;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(solution(arr, n)) cout << "Array is sorted" << endl;
    else cout << "Array is not sorted" << endl;
    return 0;
}