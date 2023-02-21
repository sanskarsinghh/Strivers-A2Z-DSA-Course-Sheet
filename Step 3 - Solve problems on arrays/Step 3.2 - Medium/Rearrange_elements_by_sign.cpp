#include <bits/stdc++.h>
using namespace std;

class Solution // This is a leatcode solution edit it and it will return the answer in your VS Code terminal as well
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> pos;
        vector<int> neg;
        for (int v : nums)
        {
            if (v >= 0)
                pos.push_back(v);
            else
                neg.push_back(v);
        }
        vector<int> ans;
        int i = 0;
        int j = 0;
        while (i < pos.size() && j < neg.size())
        {
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        }
        return ans;
    }
};
int main()
{
    int arr[] = {3, 1, -2, -5, 2, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    solution(arr, n);
    return 0;
}