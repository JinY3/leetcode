/*
 * @lc app=leetcode.cn id=393 lang=cpp
 *
 * [393] UTF-8 编码验证
 */

// @lc code=start
class Solution
{
public:
    bool validUtf8(vector<int> &data)
    {
        int count = 0;
        for (int i : data)
        {
            if (count == 0)
            {
                if ((i >> 7) == 0)
                {
                    continue;
                }
                else
                {
                    for (int j = 6; j > 0; j--)
                    {
                        if ((i >> j) == 2)
                        {
                            return false;
                        }
                        else if ((i >> j) == pow(2, 8 - j) - 1)
                        {
                            count = 7 - j;
                            if (count > 3)
                            {
                                return false;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
            else
            {
                count--;
                if ((i >> 6) != 2)
                {
                    return false;
                }
            }
        }
        if (count != 0)
        {
            return false;
        }
        return true;
    }
};
// @lc code=end