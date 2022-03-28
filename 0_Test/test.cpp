#include <iostream>

using namespace std;

int c = 4;

typedef union
{
    int a;
    int& b = c;
}Test;


int main(void)
{
    Test test;
    cout << test.b;

    return 0;
}


