#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    set<int> s;
    for(int i=1;i<=n;i++) {
        int x; cin >> x;
        s.insert(x);
    }
    for(auto x:s) cout << x << " ";
    return 0;
}