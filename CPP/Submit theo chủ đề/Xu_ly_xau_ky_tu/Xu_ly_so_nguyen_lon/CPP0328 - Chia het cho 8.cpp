#include <bits/stdc++.h>
using namespace std;
int solve(string s,int k) {
    int count=0;
    for(int i=0;i<s.length();i++) {
        int n=0;
        for(int j=i;j<s.length();j++) {
            n=n*10+(s[j]-'0');
            n%=k;
            if(n==0) count++;
        }
    }
    return count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        cout << solve(s,8)-solve(s,24) << "\n";
    }
    return 0;
}