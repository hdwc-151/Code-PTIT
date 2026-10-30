#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    vector<vector<char>> a(n,vector<char>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin >> a[i][j];
    vector<vector<int>> hor(n,vector<int>(n,0));
    vector<vector<int>> ver(n,vector<int>(n,0));
    for(int i=n-1;i>=0;i--) for(int j=n-1;j>=0;j--) if(a[i][j]=='X') {
        hor[i][j]=(j==n-1)?1:hor[i][j+1]+1;
        ver[i][j]=(i==n-1)?1:ver[i+1][j]+1;
        }
    for(int k=n;k>=1;k--) for(int i=0;i<=n-k;i++) for(int j=0;j<=n-k;j++) if(hor[i][j]>=k&&ver[i][j]>=k&&hor[i+k-1][j]>=k&&ver[i][j+k-1]>=k) {
        cout << k << "\n";
        return;
    }
    cout << 0 << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}