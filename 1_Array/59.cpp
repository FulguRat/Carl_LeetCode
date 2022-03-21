#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n = 3;
    vector<vector<int>> matrix(3, vector<int>(3, 0));

    int element = 1;

    int rowMin;
    int rowMax;
    int colMin;
    int colMax;

    rowMin = 0;
    rowMax = n;
    colMin = 0;
    colMax = n;

    while (colMin < colMax)
    {
        cout << "?";
        for (int i = colMin; i < colMax; i++)
        {
            matrix[rowMin][i - 1] = element++;
        }
        colMin++;

        for (int i = rowMin; i < rowMax; i++)
        {
            matrix[i][colMax - 1] = element++;
        }
        rowMin++;

        for (int i = colMax - 1; i >= colMin; i--)
        {
            matrix[rowMax][i + 1] = element++;
        }
        colMax--;

        for (int i = rowMax - 1; i >= rowMin; i--)
        {
            matrix[i][colMin + 1] = element++;
        }
        rowMax--;
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