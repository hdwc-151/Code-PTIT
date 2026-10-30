// Thử từng ước
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int d=a[n-1]-a[0];
        vector<int> v;
        for(int i=1;i*i<=d;i++)
            if(d%i==0) {
                v.push_back(i);
                if(i*i!=d) v.push_back(d/i);
            }
            int res=0;
            for(int i=0;i<v.size();i++) {
                int temp=a[0]%v[i];
                int j;
                for(j=1;j<n;j++) if(a[j]%v[i]!=temp) break;
                if(j==n) res++;
            }
        cout << res << "\n";
    }
    return 0;
}


/*GCD solution -> WA
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x:a) cin >> x;
    if(n<=1) {
        cout << 0 << "\n";
        return;
    }
    int g=0;
    for(int i=1;i<n;i++) g=__gcd(g,abs(a[i]-a[0]));
    if(g==0) {
        cout << 0 << "\n";
        return;
        int res=0;
    }
    for(int i=1;i*i<=g;i++)
        if(g%i==0) {
            res++;
            if(i*i!=g) res++;
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
*/