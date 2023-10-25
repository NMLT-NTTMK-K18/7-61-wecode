#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
const int MAXR = 100;
const int MAXC = 100;

bool isFrobeniusMatrix(float matrix[MAX_SIZE][MAX_SIZE], int size)
{
    int countNonZeroColumns = 0;

    for (int i = 0; i < size; i++)
        if (matrix[i][i] != 1)
            return false;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (i < j && matrix[i][j] != 0)
                return false;

    for (int i = 0; i < size; i++)
    {
        int k = 0;
        for (int j = 0; j < size; j++)
        {
            if (j > i && matrix[j][i] != 0)
                k++;
        }
        if (k != 0)
            countNonZeroColumns++;
    }
    if (countNonZeroColumns > 1)
        return false;
    return true;
}

void NhapMaTran(float matrix[MAX_SIZE][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int main()
{
    float a[MAXR][MAXC];
    int n;
    cin >> n;
    int m;
    cin >> m;
    NhapMaTran(a, n);
    if (isFrobeniusMatrix(a, n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}