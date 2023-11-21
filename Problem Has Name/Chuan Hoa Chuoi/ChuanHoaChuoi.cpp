#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);			 // Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); // Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
int myStrstr(char s[], char s1[]);		 // Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	fgets(s, MAX, stdin); // Nhap chuoi s
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

int myStrlen(char s[], int k)
{
	int i = k;
	while (s[i])
		++i;
	return i - k + 1;
}

void myMemmove(char s[], int vt, int k)
{
	int n = myStrlen(s, 0);
	for (int i = vt; i <= n - k; ++i)
		s[i] = s[i + k];
}

int myStrstr(char s[], char s1[])
{
	int n = myStrlen(s, 0);
	int n1 = myStrlen(s1, 0);
	for (int i = 0; i <= n - n1; ++i)
	{
		int j = 0;
		while (s[i + j] == s1[j])
			++j;
		if (j == n1)
			return i;
	}
	return -1;
}

void Chuanhoa(char s[])
{
	int n = myStrlen(s, 0);

	for (int i = 0; i < n; ++i)
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			myMemmove(s, i, 1);
			--i;
		}

	n = myStrlen(s, 0);
	if (s[0] == ' ')
		myMemmove(s, 0, 1);
	if (s[n] == ' ')
		myMemmove(s, n, 1);

	n = myStrlen(s, 0);
	for (int i = 0; i <= n; ++i)
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (int i = 0; i < n; ++i)
		if (s[i] == ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] -= 32;
}