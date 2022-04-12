#include <bits/stdc++.h>
using namespace std;

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

void bfs(vector<int> &_rs, Node *node)
{
    for (auto ch : node->children)
    {
        bfs(_rs, ch);
    }
    _rs.emplace_back(node->val);
}

int main()
{
    vector<int> rs;
    Node *root;
    bfs(rs, root);
    // for (auto o : rs)
    // {
    //     cout << o << endl;
    // }
    return 0;
}