/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N 叉树的层序遍历
 */

#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};
// @lc code=start
class Solution
{
public:
    void show(Node *node, vector<vector<int>> &res, int height)
    {
        if (node == nullptr)
            return;
        if (res.size() < height + 1)
            res.emplace_back(vector<int>{});
        res[height].emplace_back(node->val);
        for (Node *ch : node->children)
        {
            show(ch, res, height + 1);
        }
    }

    vector<vector<int>> levelOrder(Node *root)
    {
        if (root == nullptr)
            return {};
        vector<vector<int>> res;
        show(root, res, 0);
        return res;
    }
};
// @lc code=end
