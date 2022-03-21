#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> num = {-1, 9};
    int target = 9;

    int left = 0;
    int right = num.size() - 1;
    int middle = 0;

    while (left <= right)
    {
        middle = (right - left) / 2 + left;

        if (num[middle] == target)
        {
            cout << middle;
            return 0;
        }
        else if (num[middle] < target)
        {
            left = middle + 1;
        }
        else if (num[middle] > target)
        {
            right = middle - 1;
        }
    }

    cout << -1;
    return 0;
}