#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,s; cin >> n >> s;
    vector<vector<long long>> f(n+1,vector<long long> (s+1,0));
    f[0][0]=1;
    for(int i=1;i<=n;i++) 
        for(int j=0;j<=s;j++) {
            f[i][j]=f[i-1][j];
            if(j>0) f[i][j]+=f[i-1][j-1];
        }
    cout << f[n][s];
    return 0;
}