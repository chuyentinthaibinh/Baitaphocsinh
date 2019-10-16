#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string a;
void motep()
{
    freopen("XDXMINI.INP","r",stdin);
    freopen("XDXMINI.OUT","w",stdout);
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
    if (a[0]==a[3]&&a[1]==a[2]) cout << a;
    if (a[0]==a[3]&&a[1]!=a[2]) cout << a[0] << a[1] << a[3];
    if (a[0]!=a[3]&&a[1]==a[2]) cout << a[1] << a[2];
    if (a[0]!=a[3]&&a[1]!=a[2]&&a[0]==a[2]) cout << a[0] << a[1] << a[2];
    if (a[0]!=a[3]&&a[1]!=a[2]&&a[0]!=a[2]) cout << a[1] << a[2];
    dongtep();
    return 0;
}