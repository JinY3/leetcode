/*
 * @lc app=leetcode.cn id=804 lang=cpp
 *
 * [804] 唯一摩尔斯密码词
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        unordered_set<string> res;
        const static string word_set[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        for (string &word : words)
        {
            string translate = "";
            for (char &k : word)
            {
                /*
                {
                case 'a':
                    translate += ".-";
                    break;
                case 'b':
                    translate += "-...";
                    break;
                case 'c':
                    translate += "-.-.";
                    break;
                case 'd':
                    translate += "-..";
                    break;
                case 'e':
                    translate += ".";
                    break;
                case 'f':
                    translate += "..-.";
                    break;
                case 'g':
                    translate += "--.";
                    break;
                case 'h':
                    translate += "....";
                    break;
                case 'i':
                    translate += "..";
                    break;
                case 'j':
                    translate += ".---";
                    break;
                case 'k':
                    translate += "-.-";
                    break;
                case 'l':
                    translate += ".-..";
                    break;
                case 'm':
                    translate += "--";
                    break;
                case 'n':
                    translate += "-.";
                    break;
                case 'o':
                    translate += "---";
                    break;
                case 'p':
                    translate += ".--.";
                    break;
                case 'q':
                    translate += "--.-";
                    break;
                case 'r':
                    translate += ".-.";
                    break;
                case 's':
                    translate += "...";
                    break;
                case 't':
                    translate += "-";
                    break;
                case 'u':
                    translate += "..-";
                    break;
                case 'v':
                    translate += "...-";
                    break;
                case 'w':
                    translate += ".--";
                    break;
                case 'x':
                    translate += "-..-";
                    break;
                case 'y':
                    translate += "-.--";
                    break;
                case 'z':
                    translate += "--..";
                    break;
                default:
                    break;
                }
                */
                translate += word_set[k - 'a'];
            }
            if (!res.count(translate) && translate != "")
            {
                res.emplace(translate);
            }
        }
        return res.size();
    }
};
// @lc code=end
