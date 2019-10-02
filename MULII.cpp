#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void motep()
{
    freopen("MULII.INP","r",stdin);
    freopen("MULII.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
string add(string x,string y)
{
    string c;
    long sum,carry,a,b;
    carry = 0;c="";
    while(x.length()<y.length()) x = "0" +x;
    while(y.length()<x.length()) y = "0" +y;
    for(int i=x.length()-1; i>=0 ; i--)
    {
        a=(int)(x[i]-48);
        b=(int)(y[i]-48);
        sum = a+b+carry;
        carry = sum/10;
        c=(char)(sum%10+48)+c;
    }
    if(carry>0) c = "1" + c;
    return c;
}
string mul1(string x,long long y)
{
    long long carry=0,s;
    string tmp;
    string c="";
    long long k=x.length()-1;
    for(int i=k;i>=0;i--)
    {
        s=((int)x[i]-48)*y+carry;
        carry=s/10;
        c=(char)(s%10+48)+c;
    }
    if(carry > 0)
    {
        tmp = to_string(carry);
    }
    else
    {
        tmp = "";
    }
    return  tmp +c;
}
string mul2(string x, string y)
{
    int i,j,m;
    string sum , tmp;
    m=-1;sum="";
    for(i= x.length()-1;i>=0;i--)
    {
        m++;
        tmp = mul1(y,(int)x[i]-48);
        for( j=1;j<=m;j++) tmp += "0";
        sum = add(tmp,sum);
    }
    return sum;
}

string e,f;

int main()
{
    motep();
    cin >> e >> f;
    cout << mul2(e,f);
    dongtep();
    return 0;
}
