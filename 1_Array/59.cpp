#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n = 2;
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    int element = 1;

    int offset = 0;

    while (offset < n - 1 - offset)
    {
        for (int i = offset; i < n - 1 - offset; i++)
        {
            matrix[offset][i] = element++;
        }
        for (int i = offset; i < n - 1 - offset; i++)
        {
            matrix[i][n - 1 - offset] = element++;
        }
        for (int i = n - 1 - offset; i > offset; i--)
        {
            matrix[n - 1 - offset][i] = element++;
        }
        for (int i = n - 1 - offset; i > offset; i--)
        {
            matrix[i][offset] = element++;
        }

        offset++;
    }

    if (offset == n - 1 - offset)
    {
        matrix[offset][offset] = element;
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cout << matrix[y][x] << " ";
        }
        cout << "\r\n";
    }

    return 0;
}