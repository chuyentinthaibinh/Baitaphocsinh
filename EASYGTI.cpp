#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string a,b,c,lon;
void motep()
{
    freopen("EASYGTI.INP","r",stdin);
    freopen("EASYGTI.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
bool compare(string x, string y)
{
    while ((int) x.length()<(int) y.length()) x = "0" + x;
    while ((int) x.length()>(int) y.length()) y = "0" + y;
    if (x>y) return true;
    else return false;
}
int main()
{
    motep();
    cin >> a >> b >> c;
    lon = a;
    if (compare(b,lon)) lon = b;
    if (compare(c,lon)) lon = c;
    cout << lon;
    dongtep();
    return 0;
}
