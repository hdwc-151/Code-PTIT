#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        //int a[n][m];
        vector<vector<int>> a(n,vector<int> (m));
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
        int res=0;
        for(int i=0;i<n;i++) {
            int height[100]={0};
            for(int j=0;j<m;j++)
                for(int k=i;k<n;k++) {
                    if(a[k][j]==1) height[j]++;
                    else break;
                }
                sort(height,height+m,greater<int>());
                for(int j=0;j<m;j++) res=max(res,height[j]*(j+1));
            }
        cout << res << "\n";
    }
    return 0;
}