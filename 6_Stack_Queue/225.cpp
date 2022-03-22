#include <queue>

using namespace std;

class MyStack
{
public:
    MyStack()
    {
    }

    void push(int x)
    {
        queueIO.push(x);
    }

    int pop()
    {
        for (int i = 0; i < queueIO.size() - 1; i++)
        {
            queueIO.push(queueIO.front());
            queueIO.pop();
        }

        int element = queueIO.front();
        queueIO.pop();
        return element;
    }

    int top()
    {
        return queueIO.back();
    }

    bool empty()
    {
        return queueIO.empty();
    }

private:
    queue<int> queueIO;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */