//PROBLEM : To find peak element in the array
//APPROACH: Binary Search
//TIME    : O(log n)
//SPACE   : O(1)

#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int> arr){
    int left = 0, right = arr.size()-1;
    while(left < right){
        int mid = left + (right - left)/2;
        if(arr[mid] > arr[mid+1]) right = mid;
        else left = mid+1;
    }
    return left;
}

int main(){
    vector<int> arr = {1,2,4,5,3,2,4,5,6};
    cout<< "peak element in the array is at index "<<peakElement(arr);
    return 0;
}