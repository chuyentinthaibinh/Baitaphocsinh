#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
long long n,k;
string ketqua,gt;
void motep()
{
    freopen("CDSQX.INP","r",stdin);
    freopen("CDSQX.OUT","w",stdout);
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
string div(string a, string b)
{
    string c="",hold="";
    string kb[11];
    int k,i;
    kb[0] = "0";
    for (i=1;i<=9;i++)
    {
        kb[i] = add (kb[i-1],b);
    }
    for (i=0;i<a.length();i++)
    {
        hold = hold + a[i];
        k = 1;
        while (compare(hold,kb[k])) k++;
        c = c + (char)(k-1+48);
        hold = sub(hold,kb[k-1]);
    }
    while (c.length()>1&&c[0]=='0')
    {
        c.erase(0,1);
    }
    return c;
}
string multi1 (string x,long long y)
{
    long long carry=0,S,i;
    string c="";
    long long k = x.length()-1;
    for (i=k;i>=0;i--)
    {
        S = ((int)x[i]-48)*y+carry;
        carry = S/10;
        c = (char)(S%10+48)+c;
    }
    while (carry>0)
    {
        c = char(carry%10+48) +c;
        carry /= 10;
    }
    return c;
}
string multi2(string x,string y)
{
    int j,i,m;
    string sum,tmp;
    m = -1;sum = "";
    for (i=x.length()-1;i>=0;i--)
    {
        m++;
        tmp = multi1(y,(int)(x[i]-48));
        for (j=1;j<=m;j++) tmp += "0";
        sum = add(tmp,sum);
    }
    return sum;
}
string fact(long long x)
{
    long long i;
    string S = "1";
    for (i=2;i<=x;i++)
    {
        S = multi1(S,i);
    }
    return S;
}
string combination(long long x, long long y)
{
    string C;
    C = div(fact(n),multi2(fact(k),fact(x-y)));
    return multi2(C,C);
}
int main()
{
    motep();
    cin >> n >> k;
    if (k==n)
    {
        cout << fact(k);
        return 0;
    }
    if (k>n)
    {
        cout << "0";
        return 0;
    }
    gt = fact(k);
    ketqua = multi2 (gt,combination(n,k));
    cout << ketqua;
    dongtep();
    return 0;
}
