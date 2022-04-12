/*
 * @lc app=leetcode.cn id=2024 lang=cpp
 *
 * [2024] 考试的最大困扰度
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int maxConsecutiveChars(string &answerKey, int &k, char ch)
    {
        int max_length = 0;
        int count = 0;
        int l_index = -1;
        for (int i = 0; i < answerKey.length(); i++)
        {
            if (answerKey[i] != ch)
            {
                if (count < k)
                {
                    count++;
                }
                else
                {
                    max_length = max(max_length, i - l_index - 1);
                    for (int j = l_index + 1; j < answerKey.length(); j++)
                    {
                        if (answerKey[j] != ch)
                        {
                            l_index = j;
                            break;
                        }
                    }
                }
            }
            if (i == answerKey.length() - 1)
            {
                max_length = max(max_length, i-l_index);
            }
        }
        return max_length;
    }

    int maxConsecutiveAnswers(string answerKey, int k)
    {
        return max(maxConsecutiveChars(answerKey, k, 'T'), maxConsecutiveChars(answerKey, k, 'F'));
    }
};
// @lc code=end
