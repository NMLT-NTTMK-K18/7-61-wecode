#include<iostream>
using namespace std; 

int main()
{
    int m,n;
    float a[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
    bool flag=1;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(a[i][j]!=a[j][i])
    flag=0;
    if(flag==1)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}