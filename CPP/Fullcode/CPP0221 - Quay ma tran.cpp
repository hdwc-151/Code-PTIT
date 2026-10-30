#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        int a[n][m],b[n][m]={};
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
        for(int i=n-1;i>=n/2;i--)
            for(int j=n-i;j<=i;j++) {
                b[n-i-1][j]=a[n-i-1][j-1];
                b[i][j-1]=a[i][j];
                b[j][i]=a[j-1][i];
                b[j-1][n-i-1]=a[j][n-i-1];
            }
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) b[i][j]==0?cout<<a[i][j]<<" ":cout<<b[i][j]<<" ";
        cout << "\n";
    }
    return 0;
}