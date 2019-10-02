#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int a,b;
int nt[1000000];

void motep()
{
    freopen("LKNT.INP","r",stdin);
    freopen("LKNT.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
void sang()
{
    for(int i=2; i<= 1000000; i++ )
    {
        nt[i]= true;
    }
    for(int i=2 ;i*i <= 1000000; i++)
    {
        if (nt[i]==true)
        {
            for(int j=i*i ; j<= 1000000; j+=i)
            {
                nt[j]= false;
            }
        }
    }
}
int main()
{
    motep();
    sang();
    cin>>n;
    for (int i=1; i<= n; i++)
    {
        cin>>a>>b;
        for(int j=a; j<=b ; j++)
        {
            if(nt[j])
            {
                cout<<j<<" ";
            }
        }
    cout<<endl;
    }
    dongtep();
    return 0;
}
