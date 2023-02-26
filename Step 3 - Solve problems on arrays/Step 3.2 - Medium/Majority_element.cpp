#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{
    int count = 0;
    int ele = 0;
    for (int i = 0; i < n; i++)
    {
        if(count == 0) ele = arr[i];
        if(ele == arr[i]) count+=1;
        else count -=1;
    }
    return ele;
}
int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solution(arr, n);
    return 0;
}