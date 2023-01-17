#include <bits/stdc++.h>
using namespace std  ;

class Solution {
public:
    void merge(int arr[], int l, int mid, int r)
    {
        int i = l ;
        int j = mid + 1;   
        int f = l ;        
        int temp[100000] ; 

        while (i <= mid && j <= r) {
            if (arr[i] < arr[j]) {
                temp[f] = arr[i]  ;
                i++ ;
            }
            else {
                temp[f] = arr[j]  ;
                j++ ;
            }
            f++ ;
        }

        if (i > mid) {
            while (j <= r) {
                temp[f] = arr[j]  ;
                f++ ; j++ ;
            }
        }
        else {
            while (i <= mid) {
                temp[f] = arr[i]  ;
                f++ ; i++ ;
            }
        }
        for (int f = l ; f <= r; f++) {
            arr[f] = temp[f] ;
        }
    }
    void mergeSort(int arr[], int l, int r)
    {
        if (l < r) {
            int mid = (l + r) / 2 ;
            mergeSort(arr, l, mid)  ;  
            mergeSort(arr, mid + 1, r)  ; 
            merge(arr, l, mid, r)  ;  
        }
    }
};
int main() {

    int arr[] = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    Solution obj ;
    cout << "Before Sorting Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout<<endl;
    obj.mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    return 0 ;
}