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
        vector<int> vi(rowIndex + 1);
        vi[0] = 1;
        for (int i = 0; i <= rowIndex; ++i)
        {
            for (int j = i; j > 0; --j)
            {
                vi[j] = vi[j] + vi[j - 1];
            }
        }
        return vi;
    }
};
