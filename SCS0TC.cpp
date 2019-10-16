#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; long long n,s=0,m=5; string ketqua; void motep() { freopen("SCS0TC.INP","r",stdin); freopen("SCS0TC.OUT","w",stdout); return; } void dongtep() { fclose(stdin); fclose(stdout); return; } int main() { motep(); cin >> n; while (n/m>0) { s += n/m; m *= 5; } cout << s; dongtep(); return 0; }