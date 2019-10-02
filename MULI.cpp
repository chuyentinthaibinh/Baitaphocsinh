#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long i;
string a;
long long b;
void motep()
{
    freopen("MULI.INP","r",stdin);
    freopen("MULI.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
string nhan(string x,long long y)
{
    long long carry=0,s;
    string c=" ";
    long long k=x.length()-1;
    for(i=k;i>=0;i--)
    {
        s=((int)x[i]-48)*y+carry;
        carry=s/10;
        c=(char)(s%10+48)+c;
    }
    while(carry>0)
    {
       c=char(carry%10+48)+c;
       carry /= 10;
    }
    return c;
}
int main()
{
    motep();
    cin>>a>>b;
    cout<<nhan(a,b);
    dongtep();
    return 0;
}
