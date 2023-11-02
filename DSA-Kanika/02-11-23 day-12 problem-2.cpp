// https://leetcode.com/problems/find-the-duplicate-number/

//i have added this so it doesn't show error in my vs code
//main code is the solution function
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int low=1,high=nums.size()-1;

         while(low<=high){
             int count=0;
             int mid=low + (high-low)/2;
             for(int n:nums)  if(n<=mid) count++;
             if(count<=mid) low=mid+1;
             else high=mid-1;
         }
         return low;
    }
};