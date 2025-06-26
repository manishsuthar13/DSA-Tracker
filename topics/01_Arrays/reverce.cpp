// Problem         : to reverse a given array of size n
// Approach        : Two pointer technique - one pointer at the start and one at the end of the array. 
// Time Complexity : O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    reverse(arr,n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}