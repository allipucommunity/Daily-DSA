// https://leetcode.com/problems/sort-colors/

//i have added this so it doesn't show error in my vs code
//main code is the solution function
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                int j=0;
                while(nums[j]<nums[i]) j++;
                int temp=nums[i];
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin()+j,temp);
            }
        }
    }
};