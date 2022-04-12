/*
 * @lc app=leetcode.cn id=806 lang=cpp
 *
 * [806] 写字符串需要的行数
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> numberOfLines(vector<int> &widths, string &s)
    {
        vector<int> res{1, 0};
        for (char &i : s)
        {
            if (res[1] +widths[i - 'a']>100){
                res[0]++;
                res[1] = 0;
            }
            res[1] += widths[i - 'a'];
        }
        return res;
    }
};
// @lc code=end
