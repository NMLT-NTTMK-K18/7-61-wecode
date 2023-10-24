#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            cout << a[i] << " ";
    }
    delete[] a;
    return 0;
}