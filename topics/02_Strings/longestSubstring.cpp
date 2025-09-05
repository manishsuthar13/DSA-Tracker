// Problem : To find the longest substring without repeating character
// Approach : sliding window, two pointers, hash map
// Space complexity: O(1)
//  Time complexity : O(n)

#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string s){
    int size = s.size();
    int i = 0, maxLen = 0;
    unordered_map<char,int> mp;
    for(int j=0; j<size; j++){
        if(mp.count(s[j])){
            i = max(i, mp[s[j]]+1);
        } mp[s[j]] = j;
        maxLen = max(maxLen, j-i+1);
    }
    return maxLen;
}

int main(){
    string s = "abcdefghijjdsuithro";
    cout<<"longest substring without repeating character is "<<longestSubstring(s);
    return 0;
}