#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n) // O(N*log(N)) using Brute-force solution
{
    sort(arr, arr + n);
    int count = 1;
    int prev = arr[0];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == prev + 1)
        {
            count++;
        }
    }
    return count;
}

int longestConsecutive(vector < int > &nums) {
  set < int > hashSet;
  for (int num: nums) {
    hashSet.insert(num);
  }

  int longestStreak = 0;

  for (int num: nums) {
    if (!hashSet.count(num - 1)) {
      int currentNum = num;
      int currentStreak = 1;

      while (hashSet.count(currentNum + 1)) {
        currentNum += 1;
        currentStreak += 1;
      }

      longestStreak = max(longestStreak, currentStreak);
    }
  }

  return longestStreak;
}
int main()
{
    vector<int> arr = {100, 200, 1, 3, 2, 4};
    int ans = longestConsecutive(arr);
    cout << ans;
    return 0;
}