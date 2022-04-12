/*
 * @lc app=leetcode.cn id=954 lang=cpp
 *
 * [954] 二倍数对数组
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool canReorderDoubled(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<int>::iterator it;
        for (it = arr.begin() + 1; it != arr.end();it++)
        {
            if (*it == *arr.begin() * 2 || *it * 2 == *arr.begin())
            {
                arr.erase(it);
                arr.erase(arr.begin());
                it = arr.begin();
            }
        }
        if (arr.size() != 0)
        {
            return 0;
        }
        return 1;
    }
};
// @lc code=end