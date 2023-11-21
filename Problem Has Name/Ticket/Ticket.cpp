#include <iostream>
using namespace std;

// Bước check 1: Quick check xem có thoả mãn tồn tại không
bool checkValid(int first, int sec)
{
	if (first > 18 || sec > 18 || first < sec)
		return false;
	return true;
}

// Bước check 2: Swap lại theo thứ tự [số lớn | số bé] và check "số lớn" > 0 không
bool swapAndCheck(int &first, int &sec)
{
	if (first > sec && sec > 0)
		swap(first, sec);
	return first > 0;
}

// Tìm cặp số đầu tiên
void findFirstPair(int num, int &first, int &sec)
{
	int i = 0;
	do
	{
		first = num - i;
		sec = i;
		++i;
	} while (first > 1 && sec < 9);
}

// Tìm cặp số thứ 2
void findSecPair(int num, int &first, int &sec)
{
	int i = 0;
	do
	{
		first = num - i;
		sec = i;
		++i;
	} while (first > 0 && sec < 9);
}

// Tìm 2 cặp số [num_1, num_2] và [num_3, num_4]
void findTwoPairs(int first, int sec, int &num_1, int &num_2, int &num_3, int &num_4)
{
	if (checkValid(first, sec) && swapAndCheck(first, sec))
	{
		findFirstPair(first, num_1, num_2);
		findSecPair(sec, num_3, num_4);
	}
	else
		num_1 = num_2 = num_3 = num_4 = 0;
}

int chooseAppropriateResult(int res_1, int res_2)
{
	if (res_1 * res_2 != 0)
		return res_1 > res_2 ? res_2 : res_1;
	else if (res_1 != 0)
		return res_1;
	else
		return res_2;
}

// Ghép số lại sau cùng
int mergeFinalResult(int num_1, int num_2, int num_3, int num_4)
{
	return num_1 * 1000 + num_2 * 100 + num_3 * 10 + num_4;
}

int main()
{
	int n;
	cin >> n;

	// Loại trường hợp n != [10, 9999]
	if (n > 9999 || n < 10)
	{
		cout << 0;
		return 0;
	}

	// TH1: [????]
	int num_1, num_2, num_3, num_4, result;
	if (n > 999)
	{
		int first = n / 100;
		int sec = n % 100;
		findTwoPairs(first, sec, num_1, num_2, num_3, num_4);
		result = mergeFinalResult(num_1, num_2, num_3, num_4);
	}

	// TH2: [???]
	else if (n > 99)
	{
		// TH2.1: [??|?]
		int first = n / 10;
		int sec = n % 10;
		findTwoPairs(first, sec, num_1, num_2, num_3, num_4);
		int situation_1 = mergeFinalResult(num_1, num_2, num_3, num_4);

		// TH2.2: [?|??]
		first = n / 100;
		sec = n % 100;
		int situation_2 = mergeFinalResult(num_1, num_2, num_3, num_4);

		result = chooseAppropriateResult(situation_1, situation_2);
	}

	// TH3: [??]
	else
	{
		// TH3.1: [?|?]
		int first = n / 10;
		int sec = n % 10;
		findTwoPairs(first, sec, num_1, num_2, num_3, num_4);
		int situation_1 = mergeFinalResult(num_1, num_2, num_3, num_4);

		// TH3.2: [??|0]
		first = n;
		sec = 0;
		findTwoPairs(first, sec, num_1, num_2, num_3, num_4);
		int situation_2 = mergeFinalResult(num_1, num_2, num_3, num_4);

		result = chooseAppropriateResult(situation_1, situation_2);
	}

	// In kết quả
	if (result > 999)
		cout << result;
	else
		cout << 0;
}