#include <iostream>
#include<stdio.h>
#define MAX 555
using namespace std;
int a[MAX][MAX];
int b[MAX][MAX];
void khoitao(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                    b[j][j]=0;
                else b[i][j]=1;
            }
            else
            {
                if(j%2==0)
                    b[i][j]=1;
                else b[i][j]=0;
            }
        }
    }
}
int abs(int x)
{
    if(x<0) return(-x);
    else return x;
}
int main()
{
    int n;
    freopen("input.txt","r",stdin);
    cin>>n;
    khoitao(n);
    int k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            {
                cin>>k;
                a[i][j]=k;
            }
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x,y,z,t,p;
        cin>>x>>y>>z>>t;
        int tong1=0; int tong2=0;
        for(int h=x;h<=z;h++)
        {
            for(int l=y;l<=t;l++)
            {
                if(b[h][l]==0)
                {
                    tong1+=a[h][l];
                }
                else
                {
                    tong2+=a[h][l];
                }
            }
            p = tong1-tong2;
        }
        cout<<abs(p)<<endl;
    }
    return 0;
}
