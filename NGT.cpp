#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;

void mo()
{
    freopen("NGT.INP","r",stdin);
    freopen("NGT.OUT","w",stdout);
    return;
}
void dong()
{
    fclose(stdin);
    fclose(stdout);
    return;
}
string nhan(string x, string y)
{
    int len1 = x.size();
    int len2 = y.size();

    if (len1 == 0 || len2 == 0)
    return "0";

    vector<int> result(len1 + len2, 0);

    int i_n1 = 0;
    int i_n2 = 0;

    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = x[i] - '0';

        i_n2 = 0;

        for (int j=len2-1; j>=0; j--)
        {
            int n2 = y[j] - '0';

            int sum = n1*n2 + result[i_n1 + i_n2] + carry;

            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
    if (i == -1)
    return "0";

    string s = "";

    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}
string gt(int n)
{
    if(n==0)
    {
        return "1";
    }
    string tmp = "1";
    for(int i =1; i <=n; i++)
    {
        tmp = nhan(tmp,to_string(i));
    }
    return tmp;
}
int main()
{
    mo();
    cin>>n;
    cout<<gt(n);
    dong();
    return 0;
}
