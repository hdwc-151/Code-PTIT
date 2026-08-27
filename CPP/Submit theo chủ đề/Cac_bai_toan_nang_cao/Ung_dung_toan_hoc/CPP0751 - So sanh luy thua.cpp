#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        vector<int> x(n),y(m);
        int count_y[5]={0};
        for(int i=0;i<n;i++) cin >> x[i];
        for(int i=0;i<m;i++) {
            cin >> y[i];
            if(y[i]<5) count_y[y[i]]++;
        }
        sort(y.begin(),y.end());
        long long ans=0;
        for(int i=0;i<n;i++) {
            int e=x[i];
            if(e==0) continue;
            if(e==1) {
                ans+=count_y[0];
                continue;
            }
            auto it=upper_bound(y.begin(),y.end(),e);
            ans+=(y.end()-it);
            ans+=count_y[0]+count_y[1];
            if(e==2) ans-=(count_y[3]+count_y[4]);
            if(e==3) ans+=count_y[2];
        }
        cout << ans << "\n";
    }
    return 0;
}