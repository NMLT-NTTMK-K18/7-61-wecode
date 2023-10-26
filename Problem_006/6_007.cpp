#include <iostream>

using namespace std;

void Nhap(int[], int&);
int GTLN(int[],int);

int main()
{
	int a[5000];
	int n;
	Nhap(a, n);
	cout << GTLN(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int GTLN(int a[],int n)
{
	int max2 = a[0];
	int max = a[0];
	for (int i = 0; i < n; i++)
		if (max < a[i])
			max = a[i];
	for (int i = n-1; i>=0; i--)
		if (max > a[i] && max2 <= a[i])
			max2 = a[i];
	if (max == max2)
		return 0;
	return max2;
}

