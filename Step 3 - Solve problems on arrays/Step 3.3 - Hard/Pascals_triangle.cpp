#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> solution(int &n) // This is the leetcode solution, you can edit and use it in your VS Code as well.
{
    vector<vector<int>> r(n);
    for (int i = 0; i < n; i++)
    {
        r[i].resize(n);        // Resizing the row as we move on since the successive row in (size.previous_row + 1)
        r[i][0] = r[i][i] = 1; // Initializing the 1st and the last element as "1" of every row.
        for (int j = 1; j < i; j++)
        {
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j]; // Adding to get the element at index
        }
    }
}

int main()
{
    int n = 5;
    return 0;
}