#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string a, b;

void mo()
{
    freopen("ADDK.INP","r",stdin);
    freopen("ADDK.OUT","w",stdout);
    return;
}

void dong()
{
    fclose(stdin);
    fclose(stdout);
    return;
}

string Sum(string str1, string str2)
{

    if (str1.length() > str2.length())
        swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');

        carry = sum/10;
    }

    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    if (carry)
        str.push_back(carry+'0');

    reverse(str.begin(), str.end());

    return str;
}
int main()
{
    mo();
    cin>>a>>b;
    cout<<Sum(a,b);
    dong();
    return 0;
}
