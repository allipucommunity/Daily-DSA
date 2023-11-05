// https://leetcode.com/problems/search-a-2d-matrix/

//i have added this so it doesn't show error in my vs code
//main code is the solution function
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool binarysearch(vector<int>& row, int target){
        int low = 0, high = row.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(target==row[mid]) return true;
            else if(target<row[mid]) {high=mid-1; cout<<high;}
            else low=mid+1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(),cols = matrix[0].size();
        int low = 0, high =rows-1;
        while(low<=high){
            int mid = (low+high)/2;
            int first=matrix[mid][0],last=matrix[mid][cols-1];

            if(target == last)     return true;
            
            else if(target < last && target>=first)     {
                if(target == first)     return true;
                return binarysearch(matrix[mid],target);
            }
            else if(target < last)      high=mid-1;
            
            else low=mid+1;
        }
        return false;
    }
};