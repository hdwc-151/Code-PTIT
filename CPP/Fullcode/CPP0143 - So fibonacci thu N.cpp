#include <bits/stdc++.h>
using namespace std;
vector<long long> f;
void fibo() {
    f.assign({0,1,1});
    for(int i=3;i<=92;i++) f.push_back(f[i-1]+f[i-2]);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    fibo();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << f[n] << "\n";
    }
    return 0;
}