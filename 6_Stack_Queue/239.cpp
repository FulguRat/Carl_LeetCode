#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(void)
{
    vector<int> nums = {1, 3, 1, 2, 0, 5};
    int k = 3;
    vector<int> result = {};

    class QueueCache
    {
    public:
        void push(int element)
        {
            while (!que.empty() && que.front() < element)
            {
                que.pop_front();
            }
            que.push_front(element);
        }
        void pop(int element)
        {
            if (!que.empty() && que.back() == element)
            {
                que.pop_back();
            }
        }
        int maxValue()
        {
            return que.back();
        }

    private:
        deque<int> que;
    };

    QueueCache window;

    for (int i = 0; i < k; i++)
    {
        window.push(nums[i]);
    }
    result.push_back(window.maxValue());

    for (int i = k; i < nums.size(); i++)
    {
        window.pop(nums[i - k]);
        window.push(nums[i]);
        result.push_back(window.maxValue());
    }

    return 0;
}