// Problem: Length of Minimim size subarray which sums equal to or more than given target
// Approach: sliding window, two pointers
// Space complexity:  O(1)
// Time complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

int minSize(int target, vector<int> arr){
    int n = arr.size();
    int j=0, sum =0, minLen = INT_MAX;
    for(int i=0; i<n; i++){
        sum += arr[i];
        while(sum >= target){
            minLen = min(minLen, i-j+1);
            sum -= arr[j];
            j++;
        }
    }
    return minLen;
}

int main(){
    vector<int> arr ={1,2,3,2,1,3,3,4,2,4,2,3};
    int target = 8;
    cout<<"minimum length of the array is: "<< minSize(target, arr);
    return 0;
}