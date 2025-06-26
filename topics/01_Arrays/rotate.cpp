// Problem         : To rotate a given array of size n by k positions to the left/right
// Approach        : Reversal algorithm - for array rotation and two pointer technique for reversing subarrays.
// Time Complexity : O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int k) {
    k = k % n;                   // Handle cases where k >= n 
    reverse(arr, 0, n - 1);      // Reverse the entire array
    reverse(arr, 0, n - k - 1);  // Reverse the first n-k elements
    reverse(arr, n - k, n - 1);  // Reverse the last k elements

    //for rotating right :- 
    // reverse(arr, 0, k - 1);   // Reverse the first k elements
    // reverse(arr, k, n - 1);   // Reverse the last n-k elements
    // reverse(arr, 0, n - 1);   // Reverse the entire array
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the number of positions to rotate: ";
    cin >> k;
    
    rotate(arr, n, k);
    
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}