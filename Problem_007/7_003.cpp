#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
const int MAXR = 100;
const int MAXC = 100;

bool isMaTranDonVi(int matrix[MAX_SIZE][MAX_SIZE], int size);
void NhapMaTran(int matrix[MAX_SIZE][MAX_SIZE], int &size);

void NhapMaTran(int matrix[MAX_SIZE][MAX_SIZE], int &size)
{
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

bool isMaTranDonVi(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout << std::boolalpha << isMaTranDonVi(a, n);
    return 0;
}
// This problem not include main_func please erase it befor submit in wecode