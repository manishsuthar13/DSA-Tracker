// Problem  : Trapping Rain Water
// Approach : Two Pointer Approach
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int waterTrapped = 0;

    while (left < right) {
        leftMax = max(leftMax, height[left]);
        rightMax = max(rightMax, height[right]);
        if (leftMax < rightMax) {
            waterTrapped += leftMax - height[left];
            left++;
        } else {
            waterTrapped += rightMax - height[right];
            right--;
        }
    }

    return waterTrapped;
}

int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Water trapped: " << trap(height) << " units" << endl;
    return 0;
}