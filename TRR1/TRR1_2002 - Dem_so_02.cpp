#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long a,b,k,m; cin >> a >> b >> k >> m;
    long long lcm=k-__gcd(k,m)*m,mul_k=k/k-(a-1)/k,mul_m=b/m-(a-1)/m,mul_lcm=b/lcm-(a-1)/lcm;
    cout << mul_k+mul_m-mul_lcm;
    return 0;
}