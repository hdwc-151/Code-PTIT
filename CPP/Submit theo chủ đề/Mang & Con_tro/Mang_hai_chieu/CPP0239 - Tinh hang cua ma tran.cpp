#include <bits/stdc++.h>
using namespace std;
const double EPS=1e-9;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        vector<vector<double>> a(n,vector<double>(m));
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
        int rank=0;
        for(int c=0;c<m;c++) {
            int pivot=rank;
            while(pivot<n&&abs(a[pivot][c])<EPS) pivot++;
            if(pivot==n) continue;
            swap(a[rank],a[pivot]);
            for(int i=rank+1;i<n;i++) {
                if(abs(a[i][c])>EPS) {
                    double factor=a[i][c]/a[rank][c];
                    for(int j=c;j<m;j++) a[i][j]-=factor*a[rank][j];
                }
            }
            rank++;
            if(rank==n) break;
        }
        cout << rank << "\n";
    }
    return 0;
}