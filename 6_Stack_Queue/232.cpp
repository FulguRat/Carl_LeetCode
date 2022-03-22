#include <stack>

using namespace std;

class MyQueue
{
public:
    MyQueue()
    {
    }

    void push(int x)
    {
        stackIn.push(x);
    }

    int pop()
    {
        if (stackOut.empty())
        {
            while (!stackIn.empty())
            {
                stackOut.push(stackIn.top());
                stackIn.pop();
            }
        }

        int element = stackOut.top();
        stackOut.pop();
        return element;
    }

    int peek()
    {
        int element = this->pop();
        stackOut.push(element);

        return element;
    }

    bool empty()
    {
        return stackIn.empty() && stackOut.empty();
    }

private:
    stack<int> stackIn;
    stack<int> stackOut;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */