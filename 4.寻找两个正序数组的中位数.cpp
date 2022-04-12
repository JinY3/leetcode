/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size() + nums2.size();
        if (n % 2 == 0)
        {
            int num1, num2;
            for (int k = n / 2; k != 1; k -= k / 2)
            {
                if (nums1.size() < k / 2)
                {
                    nums2.erase(nums2.begin(), nums2.begin() + k / 2);
                    continue;
                }
                else if (nums2.size() < k / 2)
                {
                    nums1.erase(nums1.begin(), nums1.begin() + k / 2);
                    continue;
                }

                int i = k / 2 - 1;
                while (nums1[i] == nums2[i] && i > 0)
                {
                    i--;
                }
                if (nums1[i] <= nums2[i])
                {
                    nums1.erase(nums1.begin(), nums1.begin() + k / 2);
                }
                else if (nums1[i] > nums2[i])
                {
                    nums2.erase(nums2.begin(), nums2.begin() + k / 2);
                }
            }
            if (nums1.empty())
            {
                num1 = nums2[0];
                nums2.erase(nums2.begin(), nums2.begin() + 1);
            }
            else if (nums2.empty())
            {
                num1 = nums1[0];
                nums1.erase(nums1.begin(), nums1.begin() + 1);
            }
            else
            {
                if (nums1[0] >= nums2[0]){
                    num1 = nums2[0];
                    nums2.erase(nums2.begin(), nums2.begin() + 1);
                } else {
                    num1 = nums1[0];
                    nums1.erase(nums1.begin(), nums1.begin() + 1);
                }
            }
            if (nums1.empty())
            {
                num2 = nums2[0];
            }
            else if (nums2.empty())
            {
                num2 = nums1[0];
            }
            else
            {
                num2 = min(nums1[0], nums2[0]);
            }
            // return (double)num1;
            // return (double)num2;
            return (double)(num1 + num2) / 2;
        }
        else
        {
            for (int k = n / 2 + 1; k != 1; k -= k / 2)
            {
                if (nums1.size() < k / 2)
                {
                    nums2.erase(nums2.begin(), nums2.begin() + k / 2);
                    continue;
                }
                else if (nums2.size() < k / 2)
                {
                    nums1.erase(nums1.begin(), nums1.begin() + k / 2);
                    continue;
                }
                int i = k / 2 - 1;
                while (nums1[i] == nums2[i] && i > 0)
                {
                    i--;
                }
                if (nums1[i] <= nums2[i])
                {
                    nums1.erase(nums1.begin(), nums1.begin() + k / 2);
                }
                else if (nums1[i] > nums2[i])
                {
                    nums2.erase(nums2.begin(), nums2.begin() + k / 2);
                }
            }
            if (nums1.empty())
            {
                return (double)nums2[0];
            }
            else if (nums2.empty())
            {
                return (double)nums1[0];
            }
            else
            {
                return (double)min(nums1[0], nums2[0]);
            }
        }
    }
};
// @lc code=end
