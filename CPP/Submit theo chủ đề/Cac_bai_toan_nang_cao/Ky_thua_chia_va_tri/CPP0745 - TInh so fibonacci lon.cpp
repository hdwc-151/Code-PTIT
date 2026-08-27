#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<long long> f(1001);
    f[0]=0,f[1]=1;
    for(int i=2;i<=1000;i++) f[i]=(f[i-1]+f[i-2])%MOD;
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << f[n] << "\n";
    }
    return 0;
}