#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

void motep()
{
    freopen("CD16.INP","r",stdin);
    freopen("CD16.OUT","w",stdout);
    return;
}
void dongtep()
{
    fclose(stdin);
    fclose(stdout);
    return;
}

string s;
string gt(string x)
{
    if(x=="0000") return "0";
    if(x=="0001") return "1";
    if(x=="0010") return "2";
    if(x=="0011") return "3";
    if(x=="0100") return "4";
    if(x=="0101") return "5";
    if(x=="0110") return "6";
    if(x=="0111") return "7";
    if(x=="1000") return "8";
    if(x=="1001") return "9";
    if(x=="1010") return "A";
    if(x=="1011") return "B";
    if(x=="1100") return "C";
    if(x=="1101") return "D";
    if(x=="1110") return "E";
    if(x=="1111") return "F";
    return " ";
}

int main()
{
    motep();
    cin>>s;
    for(int i=0; i<= (int)s.length()-1;i=i+4)
    {
        cout<<(gt(s.substr(i,4)));
    }
    dongtep();
    return 0;
}
