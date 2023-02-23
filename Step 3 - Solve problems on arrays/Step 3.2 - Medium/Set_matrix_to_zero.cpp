#include <bits/stdc++.h>
using namespace std;
void solution(vector<vector<int>> &matrix)
{
    int col0 = 0;
    int row = matrix.size();
    int column = matrix[0].size();

    for (int i = 0; i < row; i++)
    {
        if (matrix[0][i] == 0)
            col0 = 0;
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
        }
    }

    for (int i = row - 1; i >= 0; i--)
    {
        for (int j = column - 1; j >= 0; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
        if (col0 = 0)
            matrix[i][0] = 0;
    }
}
int main()
{
    vector<vector<int>> arr;
    arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    solution(arr);
    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}