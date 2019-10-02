#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
void motep()
{
    freopen("TUN.INP","r",stdin);
    freopen("TUN.OUT","w",stdout);
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
    int s;
    s=1;
    for(int i=2 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    cout<<s;
    dongtep();
    return 0;
}
