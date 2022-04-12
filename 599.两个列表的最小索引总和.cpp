/*
 * @lc app=leetcode.cn id=599 lang=cpp
 *
 * [599] 两个列表的最小索引总和
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
    {
        unordered_map<string, int> index;
        int indexSum = INT_MAX;
        vector<string> result;
        for (int i = 0; i < list1.size(); i++)
        {
            index[list1[i]] = i;
        }
        for (int i = 0; i < list2.size(); i++)
        {
            if (index.count(list2[i]) > 0)
            {
                if (index[list2[i]] + i < indexSum)
                {
                    result.clear();
                    result.emplace_back(list2[i]);
                    indexSum = index[list2[i]] + i;
                }
                else if (index[list2[i]] + i == indexSum)
                {
                    result.emplace_back(list2[i]);
                } else {
                    break;
                }
            }
        }
        return result;
    }
};
// @lc code=end
