#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
long a[10000000];

void motep()
{
    freopen("TDLH10.INP","r",stdin);
    freopen("TDLH10.OUT","w",stdout);
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
    long s;
    s=0;
    for(int i=1 ; i<=n ; i++)
    {
        cin>>a[i];

    }
    for(int i=1 ; i<=n ; i++)
    {
        if(a[i]>10)
        {
            s+= a[i];
        }
    }
    cout<<s;
    dongtep();
    return 0;
}
