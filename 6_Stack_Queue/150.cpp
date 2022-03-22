#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(void)
{
    vector<string> tokens = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    stack<int> stackCache;
    int tmpNum1;
    int tmpNum2;

    for (auto element : tokens)
    {
        if (element == "+" || element == "-" || element == "*" || element == "/")
        {
            tmpNum2 = stackCache.top();
            stackCache.pop();
            tmpNum1 = stackCache.top();
            stackCache.pop();

            if (element == "+") { tmpNum1 += tmpNum2; }
            else if (element == "-") { tmpNum1 -= tmpNum2; }
            else if (element == "*") { tmpNum1 *= tmpNum2; }
            else if (element == "/") { tmpNum1 /= tmpNum2; }

            stackCache.push(tmpNum1);
        }
        else
        {
            stackCache.push(stoi(element));
        }
    }

    cout << stackCache.top();

    return 0;
}