//Hash set
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<bool> valid(n,false);
    unordered_set<long long> pair_sum;
    pair_sum.reserve(n*n/2);
    for(int k=2;k<n;k++) {
        int j=k-1;
        for(int i=0;i<j;i++) pair_sum.insert(a[i]+a[j]);
        for(int p=0;p<n;p++)
            if(!valid[p]) {
                long long needed=3LL*a[p]-a[k];
                if(pair_sum.count(needed)) valid[p]=true;
            }
    }
    int ans=0;
    for(int p=0;p<n;p++) if(valid[p]) ans++;
    cout << ans << "\n";
    return 0;
}