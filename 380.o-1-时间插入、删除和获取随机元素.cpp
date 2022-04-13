/*
 * @lc app=leetcode.cn id=380 lang=cpp
 *
 * [380] O(1) 时间插入、删除和获取随机元素
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class RandomizedSet
{
public:
    RandomizedSet()
    {
        // srand((unsigned)time(NULL));
    }

    bool insert(int val)
    {
        if (set.count(val))
        {
            return false;
        }
        set[val] = nums.size();
        nums.emplace_back(val);
        return true;
    }

    bool remove(int val)
    {
        if (!set.count(val))
        {
            return false;
        }
        int index = set[val];
        int last = nums.back();
        nums[index] = last;
        set[last] = index;
        nums.pop_back();
        // nums.erase(nums.begin() + index);
        set.erase(val);
        return true;
    }

    int getRandom()
    {
        return nums[rand() % nums.size()];
    }

private:
    unordered_map<int, int> set;
    vector<int> nums;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end
