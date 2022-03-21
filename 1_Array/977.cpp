#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    //-- 双指针实现
    
    vector<int> nums = {-4, -1, 0, 3, 10};

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = nums[i] * nums[i];
    }

    int leftPtr = 0;
    int rightPtr = nums.size() - 1;

    int tmpNum;

    while (rightPtr >= leftPtr)
    {
        if (nums[leftPtr] > nums[rightPtr])
        {
            tmpNum = nums[rightPtr];
            nums[rightPtr] = nums[leftPtr];
            nums[leftPtr] = tmpNum;
        }

        rightPtr--;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}