#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void motep()
{
    freopen("EASYXAUII.INP","r",stdin);
    freopen("EASYXAUII.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
string a;
int main()
{
    motep();
    getline(cin,a);
    int len=a.length()-1;
    for (int i=len;i>=0;i--)
    {
        cout<<a[i];
    }
    dongtep();
    return 0;
}
