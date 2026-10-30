#include <bits/stdc++.h>
using namespace std;
long long f[93];
void precompute() {
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=92;i++) f[i]=f[i-1]+f[i-2];
}
void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    precompute();
    int t; cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;
        for(int i=a;i<=b;i++) cout << f[i] << " ";
        cout << "\n";
    }
    return 0;
}