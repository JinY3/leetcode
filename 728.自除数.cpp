/*
 * @lc app=leetcode.cn id=728 lang=cpp
 *
 * [728] 自除数
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool check(int &num)
    {
        int changed_num = num;
        int get_num = changed_num % 10;
        while (changed_num > 0)
        {
            if (get_num == 0)
            {
                return 0;
            }
            else if (num % get_num != 0)
            {
                return 0;
            }
            changed_num /= 10;
            get_num = changed_num % 10;
        }
        return 1;
    }

    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> res;
        for (int i = left; i <= right; i++)
        {
            if (check(i))
            {
                res.emplace_back(i);
            }
        }
        return res;
    }
};
// @lc code=end
