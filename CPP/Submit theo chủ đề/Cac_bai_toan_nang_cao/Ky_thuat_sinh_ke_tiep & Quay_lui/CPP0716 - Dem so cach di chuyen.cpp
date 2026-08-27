#include <bits/stdc++.h>
using namespace std;
struct State {
    int i,j,val;
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        int a[25][25];
        for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin >> a[i][j];
        int ans=0;
        vector<State> v;
        v.push_back({1,1,a[1][1]});
        while(!v.empty()) {
            State curr=v.back();
            v.pop_back();
            if(curr.val>k) continue;
            if(curr.i==n&&curr.j==n) {
                if(curr.val==k) ans++;
                continue;
            }
            if(curr.i+1<=n) v.push_back({curr.i+1,curr.j,curr.val+a[curr.i+1][curr.j]});
            if(curr.j+1<=n) v.push_back({curr.i,curr.j+1,curr.val+a[curr.i][curr.j+1]});
        }
        cout << ans << "\n";
    }
    return 0;
}