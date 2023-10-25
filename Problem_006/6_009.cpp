#include <iostream>
using namespace std;
void XoaNhieuPhanTu(int[], int &, int, int);

int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int p, k;
    cin >> p >> k;

    XoaNhieuPhanTu(a, n, p, k);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

void XoaNhieuPhanTu(int a[], int &n, int p, int k)
{
    for (int i = p; i < n - k; ++i)
        a[i] = a[i + k];
    n -= k;
}
