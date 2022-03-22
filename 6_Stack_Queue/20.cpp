#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
    string s = "{[()]}";
    stack<char> matchStack;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{') { matchStack.push('}'); }
        else if (s[i] == '[') { matchStack.push(']'); }
        else if (s[i] == '(') { matchStack.push(')'); }

        else if (s[i] == '}' || s[i] == ']' || s[i] == ')')
        {
            if ( matchStack.empty() || s[i] != matchStack.top())
            {
                return false;
            }
            
            matchStack.pop();
        }
    }

    return matchStack.empty();
}