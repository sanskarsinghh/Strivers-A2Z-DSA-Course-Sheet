#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void solution(int arr[], int n)
{
    int k = 0;
    while (k < n)
    {
        if(arr[k] == 0) break; 
        else k++;
    }
    int i = k; int j = k+1;
    while(i < n && j < n){
        if(arr[j] != 0){ swap(arr[i], arr[j]); i++;}
        else j++;
    }
    
}
int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    solution(arr, n);
    display(arr, n);
    return 0;
}