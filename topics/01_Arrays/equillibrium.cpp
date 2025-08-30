// PROBLEM: To find the equillibrium point in an array
// APPROACH: using prefix array sum
// SPACE COMP.: O(n)
// TIME COMP. : O(n)

#include<bits/stdc++.h>
using namespace std;

int equillibrium (vector <int> &arr){
    int n = arr.size();
    vector <int> preSum (n);
    preSum[0] = arr[0];
    for(int i=1; i<n; i++){
        preSum[i] = preSum[i-1] + arr[i];
    }
    int total = preSum[n-1];
    for(int i=1; i<n; i++){
        int left = preSum[i-1];
        int right = total - arr[i] - left;
        if(left == right) return i;
    }
    return -1;
}

int main(){
    int n;
    cout<< "size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int res = equillibrium(arr);
    if(res == -1) cout<< "no equillibrium point found";
    else cout << "equillibrium at" <<res;
    return 0;
}