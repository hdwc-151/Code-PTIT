#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string n;
        long long m;
        cin >> n >> m;
        long long k=0;
        for(auto x:n) {
            k=k*10+(x-'0');
            k%=m;
        }
        cout << k << "\n";
    }
    return 0;
}