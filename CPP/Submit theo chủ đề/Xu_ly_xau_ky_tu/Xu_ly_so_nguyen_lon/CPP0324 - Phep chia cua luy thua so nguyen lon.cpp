#include <bits/stdc++.h>
using namespace std;
long long mod(const string &a,long long m) {
    long long res=0;
    for(char c:a) res=(res*10+(c-'0'))%m;
    return res;
}
long long pow(long long a,long long b,long long m) {
    long long res=1;
    a%m;
    while(b>0) {
        if(b%2==1) res=(long long)((__int128_t)res*a%m);
        a=(long long)((__int128_t)a*a%m),b/=2;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string a;
        long long b,m; 
        cin >> a >> b >> m;
        long long a_mod=mod(a,m);
        cout << pow(a_mod,b,m) << "\n";
    }
    return 0;
}