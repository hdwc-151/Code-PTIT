#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n; cin >> n;
    int l=0,r=2e6;
    while(r-l>1) {
        int mid=(l+r)/2;
        long long f=1LL*mid*(mid+1)*(2*mid+1)/6;
        (f<=n)?l=mid:r=mid;
    }
    cout << l;
    return 0;
}