#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
void motep()
{
    freopen("DUN.INP","r",stdin);
    freopen("DUN.OUT","w",stdout);
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
    s = 0;
    for(int i=1; i<=n ; i++)
    {
        if (n%i==0)
        {
            s= s+1;
        }
    }
    cout<<s;
    dongtep();
    return 0;
}
