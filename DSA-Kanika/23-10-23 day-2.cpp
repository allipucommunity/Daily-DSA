// https://leetcode.com/problems/next-permutation/

//i have added this so it doesn't show error in my vs code
//main code is the solution function
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        while(i>0&&nums[i-1]>=nums[i]) i--;
        if(!i){
            reverse(nums.begin(),nums.end());
            return;
        }
        int j=nums.size()-1;
        while(j>=1&&nums[j]<=nums[i-1]) j--;
        swap(nums[i-1],nums[j]);
        reverse(nums.begin()+i,nums.end());
    }
};