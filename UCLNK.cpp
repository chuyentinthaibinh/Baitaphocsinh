#include <iostream>
#include <bits/stdc++.h>

#define maxn 1000001

int n;
int a[maxn];

int ans;

using namespace std;
void mo()
{
    freopen("UCLNK.INP","r",stdin);
    freopen("UCLNK.OUT","w",stdout);
    return;
}
void dong()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
int ucln(int x, int y)
{
    if (x == y) return x;

    while(x*y != 0)
    {
        if(x > y)
        {
            x %= y;
        }
        else
        {
            y %= x;
        }
    }
    if(x == 0)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int main()
{
    mo();
    cin>>n;
    for(int i =1; i <=n ; i++)
    {
        cin>>a[i];
    }
    if(n <=1)
    {
        cout<<a[1];
        return 0;
    }
    ans = ucln(a[1],a[2]);
    for(int i =3; i <= n; i++)
    {
        ans = ucln(ans,a[i]);
    }
    cout<<ans;
    dong();
    return 0;
}
