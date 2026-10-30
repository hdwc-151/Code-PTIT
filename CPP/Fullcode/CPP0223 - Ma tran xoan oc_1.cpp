#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        int a[n][m];
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
        int count=0,up=0,down=n-1,left=0,right=m-1;
        while(1) {
            for(int i=left;i<=right;i++) {
                cout << a[up][i] << " ";
                count++;
            }
            up++;
            if(count==n*m) break;
            for(int i=up;i<=down;i++) {
                cout << a[i][right] << " ";
                count++;
            }
            right--;
            if(count==n*m) break;
            for(int i=right;i>=left;i--) {
                cout << a[down][i] << " ";
                count++;
            }
            down--;
            if(count==n*m) break;
            for(int i=down;i>=up;i--) {
                cout << a[i][left] << " ";
                count++;
            }
            left++;
            if(count==n*m) break;
        }
        cout << "\n";
    }
    return 0;
}