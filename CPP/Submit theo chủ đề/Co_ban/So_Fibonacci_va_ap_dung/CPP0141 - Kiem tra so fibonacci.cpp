#include <bits/stdc++.h>
using namespace std;
vector<long long> f(1e6+1,0);
void fibo() {
    f[0]=0,f[1]=1;
    for(int i=2;i<=1e6;i++) f[i]=f[i-1]+f[i-2];
}
void testcase() {
    long long n; cin >> n;
    for(int i=0;i<f.size();i++) 
        if(f[i]>=n) {
            n==f[i]?cout<<"YES\n":cout<<"NO\n";
            return;
        }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    fibo();
    int t; cin >> t;
    while(t--) testcase();
    return 0;
}