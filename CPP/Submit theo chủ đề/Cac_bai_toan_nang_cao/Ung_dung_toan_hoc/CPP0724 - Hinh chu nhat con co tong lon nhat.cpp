#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int s=-1e9;
        int n,m; cin >> n >> m;
        vector<vector<int>> a(n,vector<int> (m));
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
        for(int i=0;i<m;i++) {
            vector <int> b(n,0);
            for(int j=i;j<m;j++) {
                int height=0;
                for(int k=0;k<n;k++) {
                    b[k]+=a[k][j];
                    height=max(b[k],b[k]+height);
                    s=max(s,height);
                }
            }
            
            }
        cout << s << "\n";
    }
    cout << "\n";
    return 0;
}