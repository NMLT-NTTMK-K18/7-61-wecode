#include <iostream>
using namespace std;

int main()
{
	int m, n, l, k;
	float a[100][100];
	float b[100][100];
	float c[100][100];
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	cin >> l >> k;
	for (int i = 0; i < l; i++)
		for (int j = 0; j < k; j++)
			cin >> b[i][j];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < k; j++)
		{
			c[i][j] = 0;
			for (int t = 0; t < n; t++)
				c[i][j] += a[i][t] * b[t][j];
		}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}
	return 0;
}