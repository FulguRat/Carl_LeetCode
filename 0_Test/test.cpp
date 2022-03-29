#include <iostream>

using namespace std;

void fun(int& a)
{
    cout << &a << endl;
}

int main(void)
{
    int testVal;
    cout << &testVal << endl;

    return 0;
}


