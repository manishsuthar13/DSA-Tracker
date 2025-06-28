// Problem         : To find the maximum subarray sum in an array.
// Approach        : Kadane's algorithm
// Time Complexity : O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int maxSum = arr[0], currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
    // for maximum subarray, we need to keep track of the maximum sum found so far
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Maximum subarray sum is: " << maxSubArraySum(arr, n) << endl;
    return 0;
}