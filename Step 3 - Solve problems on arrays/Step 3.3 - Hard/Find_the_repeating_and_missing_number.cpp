#include <bits/stdc++.h>
using namespace std;
void solution(int arr[], int n)
{
    long long int S = (n * (n + 1)) / 2;
    long long int P = (n * (n + 1) * (2 * n + 1)) / 6;

    for (int i = 0; i < n; i++)
    {
         S -= (long long int) arr[i];
         P -= (long long int) arr[i] * (long long int) arr[i];
    }
    int missingnumber = (S+P/S)/2;
    int repeatingnumber = missingnumber - S;

    cout << "Missing number : " << missingnumber << endl;
    cout << "Repeating number : " << repeatingnumber << endl;
}
int main()
{
    int arr[] = {3, 1, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    solution(arr, n);
    return 0;
}