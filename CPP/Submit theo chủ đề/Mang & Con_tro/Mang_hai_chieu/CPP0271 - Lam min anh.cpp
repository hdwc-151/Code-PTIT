//Prefix sum
#include <bits/stdc++.h>
using namespace std;
const int MAX=505;
long long pref[MAX][MAX];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m,L; cin >> n >> m >> L;
        for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) {
            long long val; cin >> val;
            pref[i][j]=val+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
        }
        long long area=(long long)L*L;
        for(int i=1;i<=n-L+1;i++) {
            for(int j=1;j<=m-L+1;j++) {
                int r1=i,c1=j;
                int r2=i+L-1,c2=j+L-1;
                long long sum=pref[r2][c2]-pref[r1-1][c2]-pref[r2][c1-1]+pref[r1-1][c1-1];
                cout << sum/area << " ";
            }
        cout << "\n";
        }
    }
    return 0;
}