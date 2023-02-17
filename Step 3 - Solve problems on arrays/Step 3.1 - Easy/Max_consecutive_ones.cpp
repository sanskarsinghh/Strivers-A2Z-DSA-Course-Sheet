#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{
    int max_count,save_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            max_count++;
            max_count = save_count > max_count ? save_count : max_count;
        }
        else {
            save_count = 0;
        }
    }
    return max_count;
}
int main()
{
    int arr[] = {1, 0, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solution(arr, n);
    return 0;
}