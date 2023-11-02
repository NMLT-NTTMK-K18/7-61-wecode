#include<iostream>
using namespace std; 
#define MAX 16

void Nhap(float[][MAX], int&, int&);
bool ktDoiXung(float[][MAX], int, int);

int main ()
{
	float a[MAX][MAX];
	int m,n;
	Nhap(a, m, n);
	if (m != n)
	{
		cout << "No";
		return 0;
	}
	if (ktDoiXung(a, m, n))
		cout << "Yes";
	else
		cout << "No";
	return 0;
}

void Nhap(float a[][MAX], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

bool ktDoiXung(float a[][MAX], int m, int n)
{
	if (m != n)
		return 0;
	for (int i = 0; i < m; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i][j] != a[j][i])
				return 0;
	return 1;
}
