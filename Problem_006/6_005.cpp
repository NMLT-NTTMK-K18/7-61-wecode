#include <iostream>
using namespace std;
#define MAX 100

void Nhapmang(int a[], int &n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

bool firstOne(int a)
{
    int temp = 0;
    while (a)
    {
        temp = a % 10;
        a /= 10;
    }
    if (temp == 1)
        return true;
    return false;
}

bool firstFour(int a)
{
    int temp = 0;
    while (a)
    {
        temp = a % 10;
        a /= 10;
    }
    if (temp == 4)
        return true;
    return false;
}

bool isBenford(int a[], int n)
{
    int count_first_1 = 0;
    int count_first_4 = 0;
    for (int i = 0; i < n; i++)
    {
        if (firstOne(a[i]))
            count_first_1++;
        else if (firstFour(a[i]))
            count_first_4++;
    }
    if (count_first_1 == 3 && count_first_4 == 1)
        return true;
    return false;
}

int main()
{
    int a[MAX], n = 10;
    Nhapmang(a, n);
    if (isBenford(a, n) == true)
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
    return 0;
}
