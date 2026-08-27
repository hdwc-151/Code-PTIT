#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        //frequency
        vector<int> cnt(1e5+5,0);
        for(int i=0;i<n;i++) {
            int x; cin >> x; 
            cnt[x]++;
        }
        vector<int> a2(m);
        for(int i=0;i<m;i++) cin >> a2[i];
        for(int x:a2) {
            while(cnt[x]>0) {
                cout << x << " ";
                cnt[x]--;
            }
        }
        for(int i=0;i<=1e5;i++)
            while(cnt[i]>0) {
                cout << i << " ";
                cnt[i]--;
            }
        cout << "\n";
    }
    return 0;
}