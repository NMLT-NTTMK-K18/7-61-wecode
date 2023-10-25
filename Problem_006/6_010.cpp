#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void NoiMang(int[], int, int[], int, int[], int);

int main()
{
    int na, nb;
    int a[100], b[100], c[200];
    Nhap(a, na);
    Nhap(b, nb);
    NoiMang(a, na, b, nb, c, na + nb);
    Xuat(c, na + nb);
    return 0;
}

void NoiMang(int a[], int na, int b[], int nb, int c[], int n)
{
    int i = 0, j = 0, k = 0;
    while (i < na && j < nb)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < na)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < nb)
    {
        c[k] = b[j];
        j++;
        k++;
    }
}

void Nhap(int a[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}