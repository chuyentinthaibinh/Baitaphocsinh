#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long a,b,c;

void mo()
{
    freopen("CSTP.INP","r",stdin);
    freopen("CSTP.OUT","w",stdout);
    return;
}
void dong()
{
    fclose(stdin);
    fclose(stdout);
}
int sodu(long x, long y, long z)
{
    long tmp = x%y;
    if(tmp == 0) return 0;

    long ans = 0;
    while(z>0)
    {
        while(tmp < y)
        {
            tmp *= 10;
        }

        ans = tmp/y;
        tmp %= y;
        if(tmp == 0) return 0;

        z --;
    }
    return ans;
}

int main()
{
    mo();
    cin>>a>>b>>c;
    cout<<sodu(a,b,c-1);
    dong();
    return 0;
}
