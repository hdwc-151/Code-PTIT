#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n+1],dp[n+1]={0},res=0;
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=1;i<=n;i++) {
            dp[i]=1;
            for(int j=1;j<i;j++) if(a[i]>a[j]) dp[i]=max(dp[i],dp[j]+1);
            res=max(res,dp[i]);
        }
        cout << res << "\n";
    }
    return 0;
}