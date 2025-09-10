// PROBLEM : To find the first and last index of the target in the array
// APPROACH: Binary Search
// TIME    : O(log n)
// SPACE   : O(1)

#include<bits/stdc++.h>
using namespace std;

vector<int> firstandlast(vector<int> &nums, int target){
    vector<int> res(2,-1); // array of 2 space with both values as -1 => [-1,-1]
    if(nums.empty()) return res;
    int left = 0, right = nums.size() -1;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(nums[mid] == target){
            res[0] = mid;
            right = mid -1 ;
        } else if (nums[mid] < target){
            left = mid +1;
        } else{
            right = mid -1;
        }
    }
    if(res[0] == -1) return res;

    int left = res[0], right = nums.size() -1;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(nums[mid] == target){
            res[1] = mid;
            left = mid + 1 ;
        } else if (nums[mid] < target){
            left = mid +1;
        } else{
            right = mid -1;
        }
    }
    return res;
}

int main(){
    vector<int> nums = {1,2,3,5,6,6,6,6,9,13,16,19};
    int target = 6;
    vector<int> result = firstandlast(nums,target);
    cout<<"First and Last position of the target are "<<result[0]<<" and "<<result[1];
    return 0;
}