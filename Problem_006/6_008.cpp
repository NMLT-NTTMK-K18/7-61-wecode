#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[500];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int num;
    cin >> num;

    int newSize = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != num)
        {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}