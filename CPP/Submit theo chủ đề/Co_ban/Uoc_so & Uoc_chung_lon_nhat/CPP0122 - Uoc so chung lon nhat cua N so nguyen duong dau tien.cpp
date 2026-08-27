#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b) {
    while(b>0) {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long r=1;
        for(long long i=1;i<=n;i++) {
            long long g=GCD(r,i);
            r=r*i/g;
        }
        cout << r << "\n";
    }
    return 0;
}