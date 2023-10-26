#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int& n);
int SoPhanTuChuaY(int a[], int n, int y);

int main()
{
    int a[MAX], n, y;
    cin >> y;
    NhapmangSNT(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << setw(5);
    cout << SoPhanTuChuaY(a, n, y)<<endl;
    return 0;
}

void NhapmangSNT(int a[], int& n)
{
    cin >> n;
    int chuyenvong;
    if(n>0)
    a[0]=2;
    else
    cout<<0;
    for (int i = 1; i < n; i++)
    {
        chuyenvong = 0;
        for (int j = 2; chuyenvong == 0; j++)
        {
            int dem = 0;
            for (int k = 1; k <= j; k++)
            {
                if (j % k == 0)
                    dem++;
            }
            if (dem == 2 && j > a[i - 1])
            {
                a[i] = j;
                chuyenvong++;
            }
        }
    }

}

int SoPhanTuChuaY(int a[], int n, int y)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        int t = a[i];
        int flag = 0;
        while (t > 0)
        {
            int du = t % 10;
            if (du == y)
                flag = 1;
            t /= 10;
        }
        if (flag == 1)
            dem++;
    }
    return dem;

}