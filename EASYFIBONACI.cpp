#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <int> f;

long n;

string ans = "";

void mo()
{
    freopen("EASYFIBONACI.INP","r",stdin);
    freopen("EASYFIBONACI.OUT","w",stdout);
    return;
}
void dong()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
void fibo(long x)
{
    long tmp1 = 1;
    long tmp2 = 1;

    f.push_back(1);
    for(int i = 3; i <= x; i++)
    {
        long tmp = tmp2;
        tmp2 += tmp1;
        tmp1 = tmp;
        f.push_back(tmp2);
    }
}

int findfibo(long x)
{
    int vt = 0;

    while(f[vt] < x)
    {
        vt++;
    }
    if(f[vt] > x)
    {
        vt--;
    }
    return f[vt];
}
int main()
{
    mo();
    cin>>n;

    fibo(n);

    while(n>=1)
    {
        if(n - findfibo(n) > 0)
        {
            cout<<findfibo(n)<<"+";
        }
        else
        {
            cout<<findfibo(n);
        }
        n -= findfibo(n);
    }
    dong();
    return 0;
}
