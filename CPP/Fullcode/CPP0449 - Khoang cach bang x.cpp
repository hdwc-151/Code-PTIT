/* WA code
#include <bits/stdc++.h>
using namespace std;
bool finding(const vector<int> &a,int l,int r,int target) {
    while(l<=r) {
        int m=(l+r)/2;
        if(a[m]==target) return 1;
        (a[m]>target)?r=m-1:l=m+1;
    }
    return 0;
}
void solve() {
    int n,x; cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++) {
        if(a[i]+x>a[n-1]) break;
        if(finding(a,i+1,n-1,a[i]+x)) {
        cout << "1\n";
        return;
        }
    }
    cout << "-1\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,x; cin >> n >> x;
    x=abs(x);
    vector<int> a(n);
    for(int &val:a) cin >> val;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
        if(binary_search(a.begin()+i+1,a.end(),a[i]+x)) {
            cout << "1\n";
            return;
        } 
    cout << "-1\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}