/*
 * @lc app=leetcode.cn id=2028 lang=cpp
 *
 * [2028] 找出缺失的观测数据
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> missingRolls(vector<int> &rolls, int mean, int n)
    {
        int sum = mean * (rolls.size() + n);
        for (int i : rolls)
        {
            sum -= i;
        }
        if (sum >= n && sum <= 6 * n)
        {
            vector<int> res(n);
            int d_num = sum / n;
            int f_val = sum % n;
            for (int i = 0; i < n; i++)
            {
                res[i] = d_num + (i < f_val ? 1 : 0);
            }
            return res;
        }
        else
        {
            return {};
        }
    }
};
// @lc code=end
