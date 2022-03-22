#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
    string s = "abbaca";
    string result = "";
    stack<char> stackIO;

    for (char element : s)
    {
        if (stackIO.empty() || stackIO.top() != element)
        {
            stackIO.push(element);
            result += element;
        }
        else
        {
            stackIO.pop();
            result.pop_back();
        }
    }

    cout << result;
    return 0;
}