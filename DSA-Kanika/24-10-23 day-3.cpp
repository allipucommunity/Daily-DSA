// https://leetcode.com/problems/pascals-triangle/

//i have added this so it doesn't show error in my vs code
//main code is the solution function
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for(int i=0;i<numRows;i++){
            v[i].push_back(1);
            for(int j=1;j<i;j++)    v[i].push_back(v[i-1][j]+v[i-1][j-1]);
            if(i>0)     v[i].push_back(1);
        }
        return v;
    }
};