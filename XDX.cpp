#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
long long i,k,q;
char a[100000000];
int b [100000000];
void motep()
{
    freopen("XDX.INP","r",stdin);
    freopen("XDX.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
bool kt (char x[100000000])
{
    q = strlen(x);
    for (i=0;i<q;i++)
    {
        b[i] = (int)a[i];
    }
    for (i=0;i<q;i++)
    {
        if(b[i]<91)
        {
            b[i] = b[i]+32;
        }
    }
    for(i=0;i<q;i++)
    {
        if (b[i] != b[q-i-1])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    return 0;
}
int main()
{
    motep();
    cin>>a;
    if (kt(a))
    {
        cout << "Y";
    }
    else
    {
        cout << "N";
    }
    dongtep();
    return 0;
}



