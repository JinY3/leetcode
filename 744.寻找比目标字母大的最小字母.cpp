/*
 * @lc app=leetcode.cn id=744 lang=cpp
 *
 * [744] 寻找比目标字母大的最小字母
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int n = letters.size();
        int l = 0, r = n - 1;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (letters[mid] > target)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return letters[r] > target ? letters[r] : letters[0];
    }
};
// @lc code=end
