#include <bits/stdc++.h>
using namespace std;
long long fact[21];
void precompute() {
    fact[0]=1;
    for(int i=1;i<=20;i++) fact[i]=fact[i-1]*i;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t; cin >> t;
    while(t--) {
        int n,r,b,g; cin >> n >> r >> b >> g;
        long long ans=0;
        for(int i=r;i<=n;i++)
            for(int j=b;j<=n-i;j++) {
                int k=n-i-j;
                if(k>=g) ans+=fact[n]/(fact[i]*fact[j]*fact[k]);
            }
        cout << ans << "\n";
    }
    return 0;
}