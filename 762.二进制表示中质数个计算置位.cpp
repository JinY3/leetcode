/*
 * @lc app=leetcode.cn id=762 lang=cpp
 *
 * [762] 二进制表示中质数个计算置位
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int isZhiShu(int num)
    {
        if (num == 0 || num == 1)
            return 0;
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }

    int countPrimeSetBits(int left, int right)
    {
        int res = 0;
        for (int i = left, temp = 0; i <= right; i++)
        {
            temp = 0;
            while (i)
            {
                i &= i - 1;
                temp++;
            }
            res += isZhiShu(temp);
        }
        return res;
    }
};
// @lc code=end
