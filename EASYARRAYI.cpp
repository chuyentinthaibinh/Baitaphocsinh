#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
long a[100000000];
int ma;
void motep()
{
    freopen("EASYARRAYI.INP","r",stdin);
    freopen("EASYARRAYI.OUT","w",stdout);
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
    for(int i=1 ;i <= n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    ma = a[1];
    for(int i=1 ; i<=n ; i++)
    {
        if(a[i] > ma)
        {
            ma = a[i];
        }
    }
    cout<<ma;
    dongtep();
    return 0;
}
