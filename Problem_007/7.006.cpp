#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    float a[500][500];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    bool check = true;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (i != j && a[i][j] != 0)
            {
                check = false;
                break;
            }
    if (check)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}