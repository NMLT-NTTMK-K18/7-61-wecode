#include <iostream>
using namespace std;
struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;
int ktNhuan(NGAY x);
int SoNgayToiDaTrongThang(NGAY x);
int SoNgayToiDaTrongNam(NGAY x);
int SoThuTu(NGAY x);
int SoThuTuTrongNam(NGAY x);
int XuatThu(NGAY x);
NGAY TimNgay(int stt);
NGAY TimNgay(int nam, int stt);

int main()
{
	int x;
	cin >> x;
	int y;
	cin >> y;
	NGAY i;
	cin >> i.Thang;
	cin >> i.Nam;
	NGAY temp = {1, i.Thang, i.Nam};
	int s = SoThuTu(temp);
	int k = XuatThu(temp);
	int dem;
	if (k == y)
		dem = 1;
	else
		dem = 0;
	int l = 2;
	for (l; dem < x && l < SoNgayToiDaTrongThang(temp); l++)
	{
		NGAY ao = {l, i.Thang, i.Nam};
		if (y == XuatThu(ao))
			dem++;
	}
	if (dem < x)
		cout << "-1";
	else
		cout << l - 1;
}

int ktNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (ktNhuan(x) == 1)
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x) == 1)
		return 366;
	return 365;
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = {1, 1, i};
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = {1, i, x.Nam};
		stt = stt + SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int XuatThu(NGAY x)
{
	int stt = SoThuTu(x);
	switch (stt % 7)
	{
	case 0:
		return 8;
	case 1:
		return 2;
	case 2:
		return 3;
	case 3:
		return 4;
	case 4:
		return 5;
	case 5:
		return 6;
	case 6:
		return 7;
	}
}