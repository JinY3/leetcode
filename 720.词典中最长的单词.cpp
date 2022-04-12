/*
 * @lc app=leetcode.cn id=720 lang=cpp
 *
 * [720] 词典中最长的单词
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    static bool rule(string &a, string &b)
    {
        if (a.size() != b.size())
        {
            return a.size() < b.size();
        }
        else
        {
            return a > b;
        }
    }

    string longestWord(vector<string> &words)
    {
        sort(words.begin(), words.end(), rule);
        string longest = "";
        unordered_set<string> cnt;
        cnt.emplace("");
        for (auto &word : words)
        {
            if (cnt.count(word.substr(0, word.size() - 1)))
            {
                cnt.emplace(word);
                longest = word;
            }
        }
        return longest;
    }
};
// @lc code=end
