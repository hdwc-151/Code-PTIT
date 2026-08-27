#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long a[1001][1001];
long long C(int k,int n) {
    if(k>n-k) k=n-k;
    if(a[k][n]!=0) return a[k][n];
    if(k==0) a[k][n]=1;
    else if(k==1) a[k][n]=n;
    else a[k][n]=C(k-1,n-1)+C(k,n-1);
    a[k][n]%=MOD;
    return a[k][n];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        cout << C(k,n) << "\n";
    }
    return 0;
}