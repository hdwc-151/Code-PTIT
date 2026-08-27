#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    int isNegative=1;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]>0) isNegative=0;
    }
    if(isNegative) {
        cout << *max_element(a,a+n) << "\n";
        return;
    }
    long long sum=0,res=a[0];
    for(int i=0;i<n;i++) {
        if(sum+a[i]<0) sum=0;
        else {
            sum+=a[i];
            res=max(res,sum);
        }
    }
    cout << res << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}