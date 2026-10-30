#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(t--) {
        int n,m; cin >> n >> m;
        //int a[n][m];
        vector<vector<int>> a(n,vector<int> (m));
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
        for(int k=0;k<=n+m-2;k++) {
            int i_min=max(0,k-m+1),i_max=min(n-1,k);
            if(k%2==0) for(int j=i_max;j>=i_min;j--) cout << a[j][k-j] << " ";
            else for(int j=i_min;j<=i_max;j++) cout << a[j][k-j] << " ";
        }
        cout << "\n";
    }
    return 0;
}