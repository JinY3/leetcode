/*
给你一个字符串 s ，其中包含字母顺序打乱的用英文单词表示的若干数字（0-9）。按 升序 返回原始的数字。
*/

#include <bits/stdc++.h>
using namespace std;

string originalDigits(string s);

int main()
{
    string s = "zeroonetwothreefourfivesixseveneightnine";
    cout << originalDigits(s) << endl;
}

string originalDigits(string s)
{
    string result[] = {"", "", ""};

    while (s.find("z") < s.length())
    {
        s.erase(s.find("z"), 1);
        s.erase(s.find("e"), 1);
        s.erase(s.find("r"), 1);
        s.erase(s.find("o"), 1);
        result[0] += '0';
    }
    while (s.find("w") < s.length())
    {
        s.erase(s.find("t"), 1);
        s.erase(s.find("w"), 1);
        s.erase(s.find("o"), 1);
        result[1] += "2";
    }
    while (s.find("x") < s.length())
    {
        s.erase(s.find("s"), 1);
        s.erase(s.find("i"), 1);
        s.erase(s.find("x"), 1);
        result[2] += "6";
    }
    while (s.find("s") < s.length())
    {
        s.erase(s.find("s"), 1);
        s.erase(s.find("e"), 1);
        s.erase(s.find("v"), 1);
        s.erase(s.find("e"), 1);
        s.erase(s.find("n"), 1);
        result[2] += "7";
    }
    while (s.find("g") < s.length())
    {
        s.erase(s.find("e"), 1);
        s.erase(s.find("i"), 1);
        s.erase(s.find("g"), 1);
        s.erase(s.find("h"), 1);
        s.erase(s.find("t"), 1);
        result[2] += "8";
    }
    while (s.find("h") < s.length())
    {
        s.erase(s.find("t"), 1);
        s.erase(s.find("h"), 1);
        s.erase(s.find("r"), 1);
        s.erase(s.find("e"), 1);
        s.erase(s.find("e"), 1);
        result[1] += "3";
    }
    while (s.find("u") < s.length())
    {
        s.erase(s.find("f"), 1);
        s.erase(s.find("o"), 1);
        s.erase(s.find("u"), 1);
        s.erase(s.find("r"), 1);
        result[1] += "4";
    }
    while (s.find("f") < s.length())
    {
        s.erase(s.find("f"), 1);
        s.erase(s.find("i"), 1);
        s.erase(s.find("v"), 1);
        s.erase(s.find("e"), 1);
        result[1] += "5";
    }
    while (s.find("i") < s.length())
    {
        s.erase(s.find("n"), 1);
        s.erase(s.find("i"), 1);
        s.erase(s.find("n"), 1);
        s.erase(s.find("e"), 1);
        result[2] += "9";
    }
    while (s.find("o") < s.length())
    {
        s.erase(s.find("o"), 1);
        s.erase(s.find("n"), 1);
        s.erase(s.find("e"), 1);
        result[0] += "1";
    }
    return result[0] + result[1] + result[2];
}