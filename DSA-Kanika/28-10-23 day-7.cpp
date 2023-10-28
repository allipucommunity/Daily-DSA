// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//i have added this so it doesn't show error in my vs code
//main code is the solution function
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lbp=prices[0];
        int mp=0,n=prices.size();
        for(int i=0;i<n;i++){
            int curr=prices[i];
            lbp=min(lbp,curr);
            mp=max(mp,curr-lbp);
        }
        return mp;
    }
};