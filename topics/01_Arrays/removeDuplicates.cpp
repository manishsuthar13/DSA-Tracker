// Problem: Remove Duplicates from a sorted array
// Approach: Two - Pointers Technique
// Time Complexity : O(n)
// Space complexity : O(n)

#include<bits/stdc++.h>
using namespace std;

vector <int> removeDuplicates(vector<int> arr){
    vector<int> newarr;
    int i=0;
    while(i<arr.size()){
        int j = i+1;
        while(arr[i] == arr[j]){
            j++;
        }
        newarr.push_back(arr[i]);
        i=j;
    }
    return newarr;
}

int main(){
    vector <int> arr ={1,1,1,2,3,4,5,5,5,6,7};
    vector<int> result = removeDuplicates(arr);
    cout<<"new array without duplicates is : ";
    for(int i : result){
        cout <<i <<" ";
    } 
    cout<<endl;
    return 0;
}