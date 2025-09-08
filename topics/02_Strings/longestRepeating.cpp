// Problem : To find the length of the longest repeating character string with atmost k replacements 
// Approach: sliding window and two pointers
// Time    : O(n)
// Space   : O(1)


#include<bits/stdc++.h>
using namespace std;

int longestRepeatingString(string s, int k){
    vector<int> freq (26,0);
    int res = 0, left = 0, maxcount =0;
    for(int right = 0; right < s.length(); right++){
        freq[s[right] - 'A']++;
        maxcount = max(maxcount, freq[s[right] - 'A']);
        while((right-left+1) - maxcount > k){
            freq[s[left] - 'A']--;
            left++;
        }
        res = max(res, right-left+1);
    }
    return res;
}

int main(){
    string s = "ABBCAAB";
    int k = 2;

    cout<<"length of longest repeating character sub string with atmost "<< k << " replacements is: "<< longestRepeatingString(s,k);
    return 0;
}