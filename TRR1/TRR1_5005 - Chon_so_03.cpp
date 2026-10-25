#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n,m,p; cin >> n >> m >> p;
    if(n<p) {
        cout << 1;
        return 0;
    }
    long long k=(n-p)/m;
    cout << k+2;
    return 0;
}