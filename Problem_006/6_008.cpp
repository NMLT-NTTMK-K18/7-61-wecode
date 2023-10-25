#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[500];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int Number_Erase;
    cin >> Number_Erase;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == Number_Erase)
            dem++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == Number_Erase)
        {
            for (int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
        }
    }
    if (n == dem)
        return 0;
    for (int i = 0; i < n - dem; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}