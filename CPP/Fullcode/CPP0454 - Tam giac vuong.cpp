#include <bits/stdc++.h>
using namespace std;
int isOK(int a,int b) {
    long long x=(long long)a*a+(long long)b*b;
    int c=sqrt(x);
    if((long long)c*c==x) return c;
    return 0;
}
void solve() {
    int n; cin >> n;
    int a[n];
    for(auto &x:a) cin >> x;
    sort(a,a+n);
    for(int i=0;i+2<n;i++)
        for(int j=0;j+1<n;j++) {
            int x=isOK(a[i],a[j]);
            if(x!=0&&binary_search(a+j+1,a+n,x)) {
                cout << "YES\n";
                return;
            }
        }
    cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}