#include <bits/stdc++.h>
using namespace std;
bool is_that_beauty(const string &s) {
    int left=0,right=s.length()-1;
    while(left<=right) {
        if(s[left]!=s[right]) return false;
        if((s[left]-'0')%2!=0) return false;
        left++;
        right--;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        is_that_beauty(s)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}