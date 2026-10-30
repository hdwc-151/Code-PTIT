#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        long long x,y,p; cin >> x >> y >> p;
        long long res=1;
        x=x%p;
        while(y>0) {
            if(y&1) res=(res*x)%p;
            y>>=1;
            x=(x*x)%p;
        }
        cout << res << "\n";
    }
    return 0;
}