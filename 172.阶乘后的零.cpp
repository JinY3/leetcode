/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int trailingZeroes(int n)
    {
        int res = 0;
        while (n >= 5)
        {
            res += (n /= 5);
        }
        return res;
    }
};
// @lc code=end
