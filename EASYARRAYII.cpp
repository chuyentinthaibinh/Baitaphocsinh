#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
long a[100000000];
long mi;
void motep()
{
    freopen("EASYARRAYII.INP","r",stdin);
    freopen("EASYARRAYII.OUT","w",stdout);
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
    for(int i=1 ; i<=n ;i++)
    {
        cin>>a[i];
    }
    for(int i=1 ; i<=n ;i++)
    {
        cout<<a[i]<<" ";

    }
    mi=a[1];
    for(int i=1 ; i<=n ;i++)
    {
        if(a[i]<mi)
        {
            mi=a[i];
        }
    }
    cout<<endl<<mi;
    dongtep();
    return 0;
}
