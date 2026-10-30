#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m,p; cin >> n >> m >> p;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(m, vector<int>(p));
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
    for(int i=0;i<m;i++) for(int j=0;j<p;j++) cin >> b[i][j];
    for(int i=0;i<n;i++) {
        for(int j=0;j<p;j++) {
            int s=0;
            for(int k=0;k<m;k++) s+=a[i][k]*b[k][j];
            cout << s << " ";
        }
        cout << "\n";
    }
    return 0;
}