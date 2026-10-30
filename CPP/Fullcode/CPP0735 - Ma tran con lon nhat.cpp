#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        vector<vector<int>> a(n,vector<int> (m));
        int maxx=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) {
                cin >> a[i][j];
                if(a[i][j]==1) {
                    if(i>0&&j>0) a[i][j]=min({a[i-1][j],a[i][j-1],a[i-1][j-1]})+1;
                    maxx=max(maxx,a[i][j]);
                }
            }
        cout << maxx << "\n";
    }
    return 0;
}