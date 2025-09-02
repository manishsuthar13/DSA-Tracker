// Problem: to find the longest subarray with sum k
// Approach: using prefix sum array and unordered map
// Time complexity:O(n)
// Space complexity:O(n)

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> arr, int k){
    int n = arr.size();
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];
    for(int i=1;i <n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    int maxLen = 0;
    unordered_map <int,int> mp;
    for(int i=0; i<n; i++){
        if(prefixSum[i] == k) maxLen = max(maxLen,i+1);

        int target = prefixSum[i]-k;
        if (mp.find(target) != mp.end()){
            int len = i - mp[target];
            maxLen = max(len,maxLen);
        }
        if(mp.find(prefixSum[i]) == mp.end()){
            mp[prefixSum[i]] = i;
        }
    }
    return maxLen;
}

int main(){
    int n;
    cout<<"enter array length: ";
    cin >> n;
    vector <int> arr(n);
    cout<<"enter array elements: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter sum to be find: ";
    cin>>k;
    int maxLen = longestSubarray(arr,k);
    cout<<"longest subarray with sum "<<k<<" is "<<maxLen;
    return 0;    
}