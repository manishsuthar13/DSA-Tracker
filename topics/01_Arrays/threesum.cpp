// Problem         : Three some problem 
// Approach        : Using two pointers technique after sorting the array.
// Time Complexity : O(n^2)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; 
        
        int left = i + 1, right = nums.size() - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum < 0) {
                left++;
            } else if (sum > 0) {
                right--;
            } else {
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) left++; // Skip duplicates
                while (left < right && nums[right] == nums[right - 1]) right--; // Skip duplicates
                left++;
                right--;
            }
        }
    }
    
    return result;
}

int main() {
    vector<int> nums;
    int n, num;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    
    vector<vector<int>> result = threeSum(nums);
    
    cout << "Triplets that sum to zero are:\n";
    for (const auto& triplet : result) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
    }
    
    return 0;
}
