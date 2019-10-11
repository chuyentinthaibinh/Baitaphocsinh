#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string a,b;
string tmpa, tmpb;

void mo()
{
    freopen("SFBNC.INP","r",stdin);
    freopen("SFBNC.OUT","w",stdout);
    return;
}
void dong()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
bool isSmaller(string x, string y)
{
    while(x.length() < y.length())
    {
        x = "0" + x;
    }
    while(y.length() < x.length())
    {
        y = "0" + y;
    }

    if(x<y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isSmalleroreqal(string x, string y)
{
    while(x.length() < y.length())
    {
        x = "0" + x;
    }
    while(y.length() < x.length())
    {
        y = "0" + y;
    }

    if(x<=y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isGreateroreqal(string x, string y)
{
    while(x.length() < y.length())
    {
        x = "0" + x;
    }
    while(y.length() < x.length())
    {
        y = "0" + y;
    }

    if(x>=y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
string sum(string str1, string str2)
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
string diff(string str1, string str2)
{
    if (isSmaller(str1, str2))
        swap(str1, str2);
    string str = "";

    int n1 = str1.length(), n2 = str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;

    for (int i=0; i<n2; i++)
    {
        int sub = ((str1[i]-'0')-(str2[i]-'0')-carry);

        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    for (int i=n2; i<n1; i++)
    {
        int sub = ((str1[i]-'0') - carry);

        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }
    reverse(str.begin(), str.end());

    string ans = "";
    for(int i = 0; i < (int)str.length(); i++)
    {
        if(str[i]!='0')
        {
            ans+=str[i];
        }
    }
    return ans;
}

int main()
{
    mo();
    cin>>a>>b;
    if(a=="1" && b=="1")
    {
        cout<<1;
        return 0;
    }
    else
    {
        string tmp1 = "1";
        string tmp2 = "1";

        long ans = 0;

        while(isSmaller(tmp2,a))
        {
            string tmp = tmp2;
            tmp2 = sum(tmp1,tmp2);
            tmp1 = tmp;
        }

        while(isGreateroreqal(tmp2,a)&&isSmalleroreqal(tmp2,b))
        {
            string tmp = tmp2;
            tmp2 = sum(tmp1,tmp2);
            tmp1 = tmp;
            ans++;
        }
        cout<<ans;
    }
    dong();
    return 0;
}
