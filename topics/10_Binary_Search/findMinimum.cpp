//PROBLEM : To find the minimum element in rotated sorted array 
//APPROACH: Binary Search
//Time    : O(log n)
//Space   : O(1)

#include<bits/stdc++.h>
using namespace std;

int minimum(vector<int> arr){
    int left = 0, right = arr.size()-1, mini = INT_MAX;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] <= arr[right]){
            mini = min(mini, arr[mid]);
            right = mid - 1;
        }else{
            mini = min(mini, arr[left]);
            left = mid + 1;
        }
    }
    return mini;
}

int main(){
    vector<int> arr = {5,6,7,9,0,1,2,3};
    cout << "minimum element in the array is : "<< minimum(arr);
    return 0;
}