
#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
	
    return 0;
}

void Nhapmang(int a[][MAX], int& n)
{
    cin >> n;
    int fib[400];
    int fibn = n * n;
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < fibn; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = fib[i + j];
}

void Xuatmang(int a[][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
