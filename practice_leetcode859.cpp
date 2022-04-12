/*
给你两个字符串 s 和 goal ，只要我们可以通过交换 s 中的两个字母得到与 goal 相等的结果，就返回 true ；否则返回 false 。

交换字母的定义是：取两个下标 i 和 j （下标从 0 开始）且满足 i != j ，接着交换 s[i] 和 s[j] 处的字符。

    例如，在 "abcd" 中交换下标 0 和下标 2 的元素可以生成 "cbad" 。
*/

#include <bits/stdc++.h>
using namespace std;

bool buddyStrings(string s, string goal);

int main()
{
    string s = "aaaaaaabc";
    string goal = "aaaaaaacb";
    cout << buddyStrings(s, goal) << endl;
}

bool buddyStrings(string s, string goal) 
{
    char tmpSIndex[2] = {'\0', '\0'};
    char tmpGoalIndex[2] = {'\0', '\0'};
    
    if (s.length() == goal.length() && s.length() > 1){
        for (int i = 0; i < s.length(); i++){
            if (s[i] != goal[i]){
                if (tmpSIndex[0] == '\0'){
                    tmpSIndex[0] = s[i];
                    tmpGoalIndex[0] = goal[i];
                } else if (tmpSIndex[1] == '\0'){
                    tmpSIndex[1] = s[i];
                    tmpGoalIndex[1] = goal[i];
                } else {
                    return false;
                }
            }
        }
        if (tmpSIndex[0] != '\0' && tmpSIndex[1] != '\0'){
            if (tmpSIndex[0] == tmpGoalIndex[1] && tmpSIndex[1] == tmpGoalIndex[0]){
                return true;
            }
        } else if (tmpSIndex[0] == '\0' && tmpSIndex[1] == '\0'){
            // s是否存在多个子项
            string tmpComp = "";
            tmpComp += s[0];

            for (int i = 1; i < s.length(); i++){
                for (int j = 0; j < tmpComp.length(); j++){
                    if (s[i] == tmpComp[j]){
                        return true;
                    }
                }
                tmpComp += s[i];
            }
            // for (int i = 0; i < s.length(); i++){
            //     for (int j = i+1; j < s.length(); j++){
            //         if (s[i] == s[j]){
            //             return true;
            //         }
            //     }
            // }
        }
    }
    return false;
}