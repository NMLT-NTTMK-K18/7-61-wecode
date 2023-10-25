#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[500];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int Number_InsertTheMidle;
    cin >> Number_InsertTheMidle;
    int Insert_Position;
    cin >> Insert_Position;
    for (int i = n; i > Insert_Position; i--)
    {
        a[i] = a[i - 1];
    }
    a[Insert_Position] = Number_InsertTheMidle;
    for (int i = 0; i < n + 1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}