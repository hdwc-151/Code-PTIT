#include <bits/stdc++.h>
using namespace std;
int tich_chap(int a[300][300],int b[3][3],int x,int y) {
    int s=0;
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) s+=a[i+x][j+y]*b[i][j];
    return s;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        int a[300][300];
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
        int b[3][3];
        for(int i=0;i<3;i++) for(int j=0;j<3;j++) cin >> b[i][j];
        long long res=0;
        for(int i=0;i<=n-3;i++) for(int j=0;j<=m-3;j++) res+=tich_chap(a,b,i,j);
        cout << res << "\n";
    }
    return 0;
}