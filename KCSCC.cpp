#include <iostream>
#include <bits/stdc++.h>

int n,m,k;

using namespace std;

void mo()
{
    freopen("KCSCC.INP","r",stdin);
    freopen("KCSCC.OUT","w",stdout);
    return;
}
void dong()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
string ans(int x, int y, int z)
{
    long du, cs;
    string kq;
    cs = 1;
    for(int i =1; i <= z; i++)
    {
        cs *= 10;
    }
    du = 1;
    for(int i =1; i <=y; i++)
    {
        du = (du*x)%cs;
    }
    kq = to_string(du);
    while(z > (int)kq.length())
    {
        kq = "0"+kq;
    }
    return kq;
}
int main()
{
    mo();
    cin>>m>>n>>k;
    cout<<ans(m,n,k);
    dong();
    return 0;
}
