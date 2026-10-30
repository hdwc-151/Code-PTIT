#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b) {
    string s1=a+b;
    string s2=b+a;
    return s1>s2;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string a[n];
        for(auto &x:a) cin >> x;
        sort(a,a+n,cmp);
        for(auto x:a) cout << x;
        cout << "\n";
    }
    return 0;
}