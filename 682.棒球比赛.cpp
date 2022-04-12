/*
 * @lc app=leetcode.cn id=682 lang=cpp
 *
 * [682] 棒球比赛
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> arr_res;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "C")
            {
                arr_res.pop_back();
            }
            else if (ops[i] == "D")
            {
                arr_res.emplace_back(*(arr_res.end() - 1) * 2);
            }
            else if (ops[i] == "+")
            {
                arr_res.emplace_back(*(arr_res.end() - 1) + *(arr_res.end() - 2));
            }
            else
            {
                arr_res.emplace_back(std::stoi(ops[i]));
            }
        }
        int res = 0;
        for (int i:arr_res)
        {
            res += i;
        }
        return res;
    }
};
// @lc code=end
