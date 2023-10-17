// link to the problem
// https://leetcode.com/problems/pascals-triangle-ii/description/?envType=daily-question&envId=2023-10-16
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> ve(rowIndex + 1);
        ve[0] = 1;
        for (int i = 0; i <= rowIndex; ++i)
        {
            for (int j = i; j > 0; --j)
            {
                ve[j] = ve[j] + ve[j - 1];
            }
        }
        return ve;
    }
};
