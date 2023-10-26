#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}

void NhapmangSNT(int a[],int& n)
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int demnt=0;
        int dem=0;
        for(int j=2;dem<n;j++)
        {
           for(int k=1;k<=j;k++)
           {
                if(j%k==0)
                   demnt++;
           }
           if(demnt==2)
           {  
             a[i]=j;
             dem++;
           }
        }
             

    }
}

int SoPhanTuChuaY(int a[], int n,int y)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        int t=a[i];
        while(t>0)
        {
            int du= t %10;
            if(du==y)
               flag=1;
            t=t/10;
        }
        if(flag ==1)
            dem++;
    }
    return dem;
}