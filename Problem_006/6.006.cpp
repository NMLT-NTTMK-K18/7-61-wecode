#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int a[100];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    int max = 0;
    for (int i = 0; i < m; i++)
        if (max < a[i])
            max = a[i];
    cout << max << endl;
    int cnt = 0;
    for (int i = 0; i < m; i++)
        if (max == a[i])
            cnt++;
    cout << cnt;
    return 0;
}