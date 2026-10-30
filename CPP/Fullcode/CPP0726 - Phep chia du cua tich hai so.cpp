#include <bits/stdc++.h>
using namespace std;
long long multi(long long a,long long b,long long c) {
    if(b==0) return 0;
    if(b==1) return a%c;
    long long temp=multi(a,b/2,c),res=2*temp%c;
    if(b&1) return (res+a)%c;
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        long long a,b,c; cin >> a >> b >> c;
        cout << multi(a,b,c) << "\n";
    }
    return 0;
}