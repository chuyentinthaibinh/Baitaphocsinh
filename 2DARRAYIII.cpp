#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long a[10001][10001];
long long m,n,i,j,k,nho,lon;
long long b[10001];
void motep()
{
    freopen("2DARRAYIII.INP","r",stdin);
    freopen("2DARRAYIII.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
int main()
{
    motep();
    cin >> n >> m;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            cin >> a[i][j];
        }
    }
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=m;j++)
            {
                b[a[i][j]] ++;
            }
        }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            cout << a[i][j]<< " ";
        }
        cout << endl;
    }
    for (k=1;k<=10000;k++)
    {
        if (b[k]!=0)
        {
            cout << k << " " << b[k] << endl;
        }
    }
    dongtep();
    return 0;
}
