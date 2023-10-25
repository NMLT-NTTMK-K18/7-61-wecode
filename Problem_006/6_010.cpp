#include <iostream>
using namespace std;

int main()
{
    // undone
    float a[100], b[100], c[200];
    int array_a, array_b;
    cin >> array_a;
    for (int i = 0; i < array_a; i++)
        cin >> a[i];
    cin >> array_b;
    for (int i = 0; i < array_b; i++)
        cin >> b[i];
    int m = 0, n = 0;
    int array_c = array_a + array_b;
    for (int i = 0; i < array_c; i++)
        if (a[m] < b[n] || n >= array_b)
            c[i] = a[m++];
        else
            c[i] = b[n++];
    for (int i = 0; i < array_c; i++)
        cout << c[i] << " ";
    return 0;
}