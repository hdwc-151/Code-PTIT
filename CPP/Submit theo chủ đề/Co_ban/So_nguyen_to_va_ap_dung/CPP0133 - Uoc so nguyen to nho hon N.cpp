#include <bits/stdc++.h>
using namespace std;
vector<bool> v(1e4+1,1);
void eratosthenes() {
    v[0]=v[1]=1;
    for(int i=2;i<=100;i++) if(v[i]) for(int j=i*i;j<=1e4;j+=i) v[j]=0;
}
void testcase() {
    int n; cin >> n;
    for(int i=2;i<=n;i++) if(v[i]) cout << i << " ";
    cout << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    eratosthenes();
    int t; cin >> t;
    while(t--) testcase();
    return 0;
}