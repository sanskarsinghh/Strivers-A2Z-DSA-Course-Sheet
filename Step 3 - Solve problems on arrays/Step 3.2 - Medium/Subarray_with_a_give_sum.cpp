#include <bits/stdc++.h>
using namespace std;
void solution(int arr[], int n, int k)
{
    int start = 0, end = -1, sum = 0;
    while (start < n)
    {
        while ((end + 1) < n && (sum + arr[end + 1] == k))
        {
            sum += arr[++end];

            if (sum == k)
            {
                for (int i = start; i < end; i++)
                {
                    cout << arr[i] << " " << endl;
                }
            }
        }
        sum -= arr[start];
        start++;
    }
}
int main()
{
    int arr[] = {1, 9, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 8;
    solution(arr, n, k);
    return 0;
}