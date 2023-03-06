#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n, int target)
{
    int low = 0;
    int high = n-1;
    int mid, ans = -1;
    while(low < high){
        int mid = (low + high)/2;
        if(arr[mid] < target) {low = mid+1;}
        else if(arr[mid] > target) {high = mid-1;}
        if(arr[mid] == target) {ans = mid; break;}
    }
    return ans;
}
int main()
{
    int arr[] = {1, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    cout << solution(arr, n, target);
    return 0;
}