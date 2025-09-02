//Problem : Container with most water
//Approach : two pointers technique
//Time complexity:
//Space complexity:

#include<bits/stdc++.h>
using namespace std;

int container(vector<int> &height){
    int left =0, right = height.size()-1, maxheight=0;
    while(left<right){
        int currvol = (right - left) * min (height[left], height[right]);
        maxheight = max(maxheight, currvol);
        if(height[left] < height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxheight;
}

int main(){
    vector <int> height{5,3,2,6,7,8,7,5,43,5,2};
    int result = container(height);
    cout << "maximum water that can be stored is : "<< result;
    return 0;
}