// https://leetcode.com/problems/power-of-four/?envType=daily-question&envId=2023-10-23
//POTD

class Solution {
public:
    bool isPowerOfFour(int n) {
        while(n>1)
        {
            if(n%4!=0)
            return false;
            n/=4;
        }
        if(n==1)
        return true;
        return false;

    }
};