/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        vector<int> simpleNums;
        int deleteIndex = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                deleteIndex = i;
            }
            else
            {
                deleteIndex = i;
                break;
            }
        }
        nums.erase(nums.begin(), nums.begin() + deleteIndex);
        bool tempTag = 1;
        int tempSum = 0;

        for (int num : nums)
        {
            bool tag = 0;
            if (num >= 0)
            {
                tag = 1;
            }
            if (tempTag == tag)
            {
                tempSum += num;
            }
            else
            {
                simpleNums.emplace_back(tempSum);
                tempSum = num;
                tempTag = tag;
            }
        }
        int res = 0;
        for (int i = 0; i < simpleNums.size(); i++)
        {
            res += simpleNums[i];
            if (simpleNums[i] > 0 && res < simpleNums[i])
            {
                res = simpleNums[i];
            }
            if (i == simpleNums.size() - 1 && simpleNums[i] < 0)
            {
                res -= simpleNums[i];
            }
        }
        return res;
    }
};
// @lc code=end
