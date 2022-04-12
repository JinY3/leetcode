#include <bits/stdc++.h>
using namespace std;

int main()
{
    int score = 0;
    int maxScore = 0;
    int scoreIndex = 0;
    int nums[]{2, 3, 1, 4, 0};
    int nums_length = sizeof(nums) / sizeof(int);
    int calculator[nums_length + 1]{};
    // 计数数组初始化
    for (int i = 0; i < nums_length + 1; i++)
    {
        calculator[i] = 0;
    }
    // 记录 k -> score变化值
    for (int i = 0; i < nums_length; i++)
    {
        if (i >= nums[i])
        {
            score++;
            maxScore++;
            calculator[i - nums[i] + 1]--;
            calculator[i + 1]++;
        }
        else
        {
            calculator[i + 1]++;
            calculator[i - nums[i] + nums_length + 1]--;
        }
    }
    // 遍历k 并改变对应score值，记录最高值时的k
    for (int i = 0; i < nums_length; i++)
    {
        score += calculator[i];
        if (score > maxScore)
        {
            maxScore = score;
            scoreIndex = i;
        }
    }
    cout << scoreIndex << endl;
    return 0;
}