#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;

void mo()
{
    freopen("SCS0TC.INP","r",stdin);
    freopen("SCS0TC.OUT","w",stdout);
    return;
}
void dong()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
int main()
{
    mo();
    cin>>n;
    if(n < 5)
    {
        cout<<0;
        return 0;
    }
    int so2 = 0;
    int so5 = 0;

    for(int i =1; i <=n; i++)
    {
        int tmp = i;
        while(tmp%2 == 0)
        {
            so2 ++;
            tmp = tmp/2;
        }
        while(tmp%5 == 0)
        {
            so5++;
            tmp =tmp/5;
        }
    }
    cout<<min(so2,so5);

    dong();
    return 0;
}
