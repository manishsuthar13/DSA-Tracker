//PROBLEM : To find target in rotated sorted array
//APPROACH: Binary Search
//TIME    : O(log n)
//SPACE   : O(1)

#include<bits/stdc++.h>
using namespace std;

int rotatedArr(vector<int> &arr, int target){
    int left = 0, right = arr.size() -1;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(arr[mid] == target) return mid;
        if(arr[mid] >= arr[left]){
            if(arr[mid] > target && arr[left] <= target) right = mid-1;
            else left = mid+1;
        } else {
            if(arr[mid]<target && arr[right] >= target) left = mid+1;
            else right = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {4,5,6,7,8,0,1,2,3};
    int target = 5;
    cout<<"element found at "<<rotatedArr(arr,target);
    return 0;
}