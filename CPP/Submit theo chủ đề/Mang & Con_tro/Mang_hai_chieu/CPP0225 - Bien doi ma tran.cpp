/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n][n],row[n],col[n],MAX=0;
        bool flag=0;
        for(int i=0;i<n;i++) {
            row[i]=0;
            for(int j=0;j<n;j++) {
                cin >> a[i][j];
                row[i]+=a[i][j];
            }
            if(row[i]>MAX) {
                MAX=row[i];
                flag=0;
            }
        }
        for(int j=0;j<n;j++) {
            col[j]=0;
            for(int i=0;i<n;i++)
                col[i]+=a[i][j];
            if(col[j]>MAX) {
                MAX=col[j];
                flag=1;
            }
        }
        int res=0;
        if(!flag) for(auto x:col) res+=MAX-x;
        else for(auto x:row) res+=MAX-x;
        cout << res << "\n";
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> row(n,0);
        vector<int> col(n,0);
        int MAX=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++) {
                int x; cin >> x;
                row[i]+=x;
                col[j]+=x;
            }
        for(int i=0;i<n;i++) MAX=max({MAX,row[i],col[i]});
        int res=0;
        for(int i=0;i<n;i++) res+=(MAX-row[i]);
        cout << res << "\n";
    }
    return 0;
}