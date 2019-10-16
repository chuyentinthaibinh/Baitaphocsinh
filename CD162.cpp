#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
long long n;
void motep()
{
    freopen("CD162.INP","r",stdin);
    freopen("CD162.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
string chuyendoi(long long x)
{
    string kq="";
    long long m;
    while (x != 0)
    {
        m = x % 16 ;
        if (m < 10) kq = to_string(m) + kq;
        if (m == 10) kq = "A" + kq;
        if (m == 11) kq = "B" + kq;
        if (m == 12) kq = "C" + kq;
        if (m == 13) kq = "D" + kq;
        if (m == 14) kq = "E" + kq;
        if (m == 15) kq = "F" + kq;
        x /= 16;
    }
    return kq;
}
int main()
{
    motep();
    cin >> n;
    cout << chuyendoi(n);
    dongtep();
    return 0;
}