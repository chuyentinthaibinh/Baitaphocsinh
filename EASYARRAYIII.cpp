#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
long a[100000000];

void motep()
{
    freopen("EASYARRAYIII.INP","r",stdin);
    freopen("EASYARRAYIII.OUT","w",stdout);
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
    cin>>n;
    for(int i=1 ; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=n ; j>i; j--)
        {
            if(a[j]<a[i]) swap(a[j],a[i]);
        }
    }
    for(int i=1 ; i<=n ; i++)
    {
        cout<<a[i]<<" ";
    }
    dongtep();
    return 0;
}
