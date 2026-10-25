#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k; cin >> n >> k;
    vector<vector<long long>> f(n+1,vector<long long> (k+1,0));
    f[0][0]=1;
    for(int i=1;i<=n;i++) {
        for(int j=0;j<k;j++) f[i][0]+=f[i-1][j];
        for(int j=1;j<k;j++) f[i][j]+=f[i-1][j-1];
    }
    long long ans=0;
    for(int i=0;i<k;i++) ans+=f[n][i];
    cout << ans;
    return 0;
}