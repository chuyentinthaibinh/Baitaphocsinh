#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string a,b,c,nho;
void motep()
{
    freopen("EASYGTII.INP","r",stdin);
    freopen("EASYGTII.OUT","w",stdout);
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
    if (x<y) return true;
    else return false;
}
int main()
{
    motep();
    cin >> a >> b >> c;
    nho = a;
    if (compare(b,nho)) nho = b;
    if (compare(c,nho)) nho = c;
    cout << nho;
    dongtep();
    return 0;
}
