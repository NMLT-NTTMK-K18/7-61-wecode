#include <iostream>
using namespace std;
int nt(int);

int main()
{
    int a[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (nt(a[i]) == 1)
        {
            flag = 1;
            cout << a[i] << " ";
        }
    }

    if (flag == 0)
        cout << 0;
    return 0;
}

int nt(int n)
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            dem++;
    if (dem == 2)
        return 1;
    return 0;
}