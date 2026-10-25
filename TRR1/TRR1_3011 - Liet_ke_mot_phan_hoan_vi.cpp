#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<vector<int>> p;
    while(next_permutation(a.begin(),a.end())&&k) {
        p.push_back(a);
        k--;
    }
    for(int i=0;i<p.size();i++) {
        for(int x:p[i]) cout << x << ' ';
        cout << '\n';
    }
    for(int i=1;i<=k;i++) cout << 0 << '\n';
    return 0;
}