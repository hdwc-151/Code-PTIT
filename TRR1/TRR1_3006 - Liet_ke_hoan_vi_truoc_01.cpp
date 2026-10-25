#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    int flag=1;
    for(int i=1;i<=n;i++) if(a[i]!=i) flag=0;
    if(flag) {
        cout << 0;
        return 0;
    }
    for(int i=n;i>1;i--)
        if(a[i]<a[i-1]) {
            swap(a[i],a[i-1]);
            break;
        }
    for(int i=1;i<=n;i++) cout << a[i] << ' ';
    return 0;
}