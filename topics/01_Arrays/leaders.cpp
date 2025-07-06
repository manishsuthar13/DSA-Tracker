// Problem  : To find all the leaders in an array.
// Approach : Finding largest elements from the right side of the array.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;
vector<int> findLeaders(int arr[], int n) {
    vector<int> leaders;
    int max = arr[n - 1];
    leaders.push_back(max);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            leaders.push_back(max);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}
int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> leaders = findLeaders(arr, n);

    cout << "Leaders in the array are: ";
    for (int leader : leaders) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}