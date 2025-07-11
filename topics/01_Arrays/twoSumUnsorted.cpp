//Problem         : Two Sum problem in unsorted array
//Approach        : Hashing
//Time complexity : O(n)
//Space complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSumUnsorted(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(numMap[complement]);
            result.push_back(i);
            return result;
        }
        numMap[nums[i]] = i;
    }
    return result; 
}

int main() {
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> result = twoSumUnsorted(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    
    return 0;
    }