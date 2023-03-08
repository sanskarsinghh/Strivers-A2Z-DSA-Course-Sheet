#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n, int target)
{
     int low = 0, high = n-1; //<---step 1

  while (low <= high) { //<--- step 2
    int mid = (low + high) >> 1; //<----step 3
    if (arr[mid] == target)
      return mid; // <---step 4

    if (arr[low] <= arr[mid]) { //<---step 5
      if (arr[low] <= target && arr[mid] >= target)
        high = mid - 1; //<---step 6 
      else
        low = mid + 1; //<---step 7
    } else { //<---step 7
      if (arr[mid] <= target && target <= arr[high])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return -1; //<---step 8
}
int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;
    cout << solution(arr, n, target) << endl;
    return 0;
}