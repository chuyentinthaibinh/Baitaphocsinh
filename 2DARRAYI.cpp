#include <iostream>
#include <bits/stdc++.h>
#define MAXn 10001
#define MAXm 10001
using namespace std;

int a[MAXn][MAXm];
int n,m;
void motep()
{
    freopen("2DARRAYI.INP","r",stdin);
    freopen("2DARRAYI.OUT","w",stdout);
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
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1 ; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=1; i<= n; i++)
    {
        for(int j=1 ; j<=m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    dongtep();
    return 0;
}

