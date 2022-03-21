#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    //-- 滑动窗口
    
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;

    int leftPtr = 0;
    int minSize = INT32_MAX;
    int tmpSize = 0;
    int summary = 0;
    
    for (int rightPtr = 0; rightPtr < nums.size(); rightPtr++)
    {
        summary += nums[rightPtr];
        tmpSize++;

        while (summary >= target)
        {
            minSize = minSize < tmpSize ? minSize : tmpSize;

            summary -= nums[leftPtr];
            tmpSize--;
            leftPtr++;
        }
    }

    cout << minSize;

    return 0;
}