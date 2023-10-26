#include <iostream>
using namespace std;

int main()
{
    float a[100][100];
    float b[100][100];
    int m, n, k, l;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cin >> k >> l;
    for (int i = 0; i < k; i++)
        for (int j = 0; j < l; j++)
            cin >> b[i][j];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] + b[i][j] << " ";
        cout << endl;
    }

    return 0;
}