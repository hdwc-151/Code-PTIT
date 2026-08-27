#include <bits/stdc++.h>
using namespace std;
vector<bool> v(1e3+1,0);
void fibo() {
    v[0]=v[1]=1;
    int f1=0,f2=1;
    for(int i=2;f1+f2<=1e3;i++) {
        int f=f1+f2;
        v[f]=1;
        f1=f2;
        f2=f;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    fibo();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=1;i<=n;i++) {
            int x; cin >> x;
            if(v[x]) cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}