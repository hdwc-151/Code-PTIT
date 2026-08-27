#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<long long> v;
        for(int i=1;i<=n;i++) {
            long long x; cin >> x;
            if(x>0) v.push_back(x);
        }
        while(v.size()<n) v.push_back(0);
        for(auto x:v) cout << x  << " ";
        cout << "\n";
    }
    return 0;
}