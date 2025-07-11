//Problem         : Two Sum problem in sorted array
//Approach        : Two Pointers
//Time complexity : O(n)
//Space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSumSorted(vector<int>& nums, int target) {
    vector<int> result;
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            result.push_back(left);
            result.push_back(right);
            return result;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return result;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSumSorted(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    
    return 0;
}