#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    //-- 快慢指针实现
    
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    
    int slowPtr = 0;

    for (int fastPtr = 0; fastPtr < nums.size(); fastPtr++)
    {
        if (nums[fastPtr] != val)
        {
            nums[slowPtr++] = nums[fastPtr];
            cout << nums[slowPtr - 1] << " ";
        }
    }

    return 0;
}