#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long MAXN = 100000000 + 7;
int a[100000000 + 1];
long s[100000000 + 1];

int n,p,q;
int k;

void mo()
{
    freopen("TTT.INP","r",stdin);
    freopen("TTT.OUT","w",stdout);
    return;
}
void dong()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
int main()
{
    mo();
    cin>>n;
    memset(s,0,100000000+1);

    for(int i = 1; i<= n ; i++)
    {
        cin>>a[i];
        s[i] += (s[i-1] + a[i])%MAXN;
        s[i] %= MAXN;
    }

    cin>> k;
    for(int i =1; i <= k; i++)
    {
        cin>>p>>q;
        if(p > q)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<s[q]-s[p-1]<<endl;
        }
    }
    dong();
    return 0;
}
