/*
 * @lc app=leetcode.cn id=1672 lang=cpp
 *
 * [1672] 最富有客户的资产总量
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int res = 0;
        for (vector<int> &account : accounts)
        {
            // get: accumulate function usage
            res = max(res, accumulate(account.begin(), account.end(), 0));
        }
        return res;
    }
};
// @lc code=end
