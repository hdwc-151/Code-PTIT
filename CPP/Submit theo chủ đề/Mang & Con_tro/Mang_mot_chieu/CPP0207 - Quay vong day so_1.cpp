#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,d; cin >> n >> d;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<n;i++) cout << v[(i+d)%n] << " ";
        cout << "\n";
    }
    return 0;
}