#include <iostream>

using namespace std;

char* fun(void)
{
    char array[2] = { 0, 1 };
    return array;
}

int main(void)
{
    char* arr = fun();
    cout << arr[1] << endl;

    return 0;
}


