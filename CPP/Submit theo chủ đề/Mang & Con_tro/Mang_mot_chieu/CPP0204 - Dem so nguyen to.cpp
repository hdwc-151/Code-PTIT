#include <bits/stdc++.h>
using namespace std;
vector<int> v(1e5+1,1);
void eratosthenes() {
    v[0]=v[1]=0;
    for(int i=2;i*i<=1e5;i++) if(v[i]) for(int j=i*i;j<=1e5;j+=i) v[j]=0;
    for(int i=2;i<=1e5;i++) v[i]+=v[i-1];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    eratosthenes();
    int t; cin >> t;
    while(t--) {
        int l,r; cin >> l >> r;
        cout << v[r]-v[l-1] << "\n";
    }
    return 0;
}