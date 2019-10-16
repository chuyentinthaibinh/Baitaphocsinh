#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
string m,n;
void motep()
{
    freopen("MSNL.INP","r",stdin);
    freopen("MSNL.OUT","w",stdout);
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
    long sum,carry,a,b;
    carry = 0;
    c = "";
    while (x.length()<y.length()) x = "0" + x;
    while (y.length()<x.length()) y = "0" + y;
    for (i=x.length()-1;i>=0;i--)
    {
        a = (int)(x[i]-48);
        b = (int)(y[i]-48);
        sum = a + b + carry;
        carry = sum/10;
        c = (char)(sum%10+48)+c;
    }
    if (carry>0) c = "1"+c;
    return c;
}
bool compare(string x, string y)
{
    while ((int) x.length()<(int) y.length()) x = "0" + x;
    while ((int) x.length()>(int) y.length()) y = "0" + y;
    if (x>=y) return true;
    else return false;
}
string sub(string x, string y)
{
    string c = "";
    int S,borrow=0,i;
    while (x.length()<y.length()) x = "0" + x;
    while (y.length()<x.length()) y = "0" + y;
    for (i=x.length()-1;i>=0;i--)
    {
        S = (int)(x[i]) - (int)(y[i]) - borrow;
        if (S<0)
        {
            S += 10;
            borrow = 1;
        }
        else borrow = 0;
        c = (char)(S+48)+c;
    }
    while (c[0]=='0')
    {
        c.erase(0,1);
    }
    return c;
}
string mod(string a, string b)
{
    string hold="0";
    string kb[11];
    int k,i;
    kb[0] = "0";
    for (i=1;i<=10;i++)
    {
        kb[i] = add (kb[i-1],b);
    }
    hold = "";
    for (i=0;i<a.length();i++)
    {
        hold = hold + a[i];
        k = 1;
        while (compare(hold,kb[k])) k++;
        hold = sub(hold,kb[k-1]);
    }
    if (hold=="") return "0";
    else return hold;
}
int main()
{
    motep();
    cin >> m >> n;
    cout << mod (m,n);
    dongtep();
    return 0;
}