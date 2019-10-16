#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string a,b;
string c,d,temp;
int k=0;
void motep()
{
    freopen("SFBNC.INP","r",stdin);
    freopen("SFBNC.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
string add(string x, string y)
{
    int i;
    string c;
    long sum, carry, a, b;
    carry = 0;
    c = "";
    while (x.length()<y.length()) x = "0" + x;
    while (y.length()<x.length()) y = "0" + y;
    for (i=x.length()-1;i>=0;i--)
    {
        a = (int)(x[i]-48);
        b = (int)(y[i]-48);
        sum = a + b + carry;
        carry = sum / 10;
        c = (char)(sum%10+48)+c;
    }
    if (carry>0) c = "1"+c;
    return c;
}
int cmp (string x, string y)
{
    while((long long)x.length()<(long long)y.length()) x = "0"+x;
    while((long long)y.length()<(long long)x.length()) y = "0"+y;
    if (x==y) return 0;
    if (x>y) return 1;
    return -1;
}
int main()
{
    motep();
    cin >> a >> b;
    c = "1";
    d = "1";
    while(cmp(d,a)==-1)
    {
        temp = d;
        d = add(c,d);
        c = temp;
    }
    while (cmp(d,b)==-1)
    {
        temp = d ;
        d = add(c,d);
        c = temp;
        k++;
    }
    cout << k+1;
    dongtep();
    return 0;
}
