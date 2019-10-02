#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string a;
long long s=0,k,i;
void motep()
{
    freopen("SD.INP","r",stdin);
    freopen("SD.OUT","w",stdout);
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
    cin >> a;
    k = a.length() - 1;
    for (i=0;i<=k;i++)
    {
        s += int(a[i]-48);
    }
    if (s%9==0)
    {
        cout << "Y";
    }
    else cout << "N";
    dongtep();
    return 0;
}