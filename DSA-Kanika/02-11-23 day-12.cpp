// https://leetcode.com/problems/merge-sorted-array/

//i have added this so it doesn't show error in my vs code
//main code is the solution function
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0,j=m;i<n;i++,j++) nums1[j]=nums2[i];
        sort(nums1.begin(),nums1.end());
    }
};