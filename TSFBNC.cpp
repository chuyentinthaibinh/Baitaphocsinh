#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long a;
void motep()
{
    freopen("TSFBNC.INP","r",stdin);
    freopen("TSFBNC.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
string add (string x, string y)
{
    string c;
    int i;
    long sum,carry,a,b;
    carry = 0;c="";
    while (x.length()<y.length()) x = "0" +x;
    while (y.length()<x.length()) y = "0" +y;
    for (i=x.length()-1;i>=0;i--)
    {
        a = (int)(x[i]-48);
        b = (int)(y[i]-48);
        sum = a+b+carry;
        carry = sum/10;
        c = (char)(sum%10+48) + c;
    }
    if (carry>0) c = "1" + c;
    return c;
}
string tong(long long x)
{
    string fibo1="1";
    string fibo2="1";
    if (x==1) return "1";
    if (x==2) return "2";
    string temp="";
    string S="0";
    long long i;
    for (i=3;i<=x;i++)
    {
        temp = add(fibo1,fibo2);
        fibo1 = fibo2;
        fibo2 = temp;
        S = add(S,temp);
    }
    return add(S,"2");
}
int main()
{
    motep();
    cin >> a;
    cout << tong(a);
    dongtep();
    return 0;
}
