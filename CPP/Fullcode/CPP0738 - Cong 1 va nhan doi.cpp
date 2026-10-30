#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x:a) cin >> x;
        int ans=0;
        while(1) {
            int count=0;
            for(int i=0;i<n;i++) {
                if(a[i]%2==1) {
                    a[i]--;
                    ans++;
                }
                if(a[i]==0) count++;
            }
            if(count==n) break;
            for(int &x:a) x/=2;
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}