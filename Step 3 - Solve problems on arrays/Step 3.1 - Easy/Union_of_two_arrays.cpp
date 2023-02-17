#include <bits/stdc++.h>
using namespace std;
vector<int> FindUnion(int arr[], int arr1[], int n, int m)
{
    set<int> s;
    vector<int> Union;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(arr1[i]);
    }
    for (auto &it : s)
    {
        Union.push_back(it);
    }
    return Union;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr1[] = {2, 3, 4, 4, 5, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr1) / sizeof(arr1[0]);
    vector<int> Union = FindUnion(arr, arr1, n, m);
    for(auto &val : Union){
        cout << val << " ";
    };
    return 0;};