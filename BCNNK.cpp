#include <iostream>
#include <bits/stdc++.h>
#define maxn 1000000 + 1

using namespace std;

int n;
int a[maxn];
int ans =1;

void mo()
{
    freopen("BCNNK.INP","r",stdin);
    freopen("BCNNK.OUT","w",stdout);
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
int bcnn(int x, int y)
{
    return (x*y)/ucln(x,y);
}
int main()
{
    mo();
    cin>>n;
    for(int i =1; i<=n; i++)
    {
        cin>>a[i];
        ans = bcnn(ans, a[i]);
    }
    cout<<ans;
    dong();
    return 0;
}
