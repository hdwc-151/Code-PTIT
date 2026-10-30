#include <bits/stdc++.h>
using namespace std;
string tong(string a,string b) {
    int len=max(a.length(),b.length());
    if(a.length()<len) a.insert(0,len-a.length(),'0');
    if(b.length()<len) b.insert(0,len-b.length(),'0');
    if(a<b) swap(a,b);
    string res="";
    res.reserve(len+1);
    int remember=0;
    for(int i=len-1;i>=0;i--) {
        int digit=(a[i]-'0')+(b[i]-'0')+remember;
        remember=digit/10;
        res.push_back((digit%10)+'0');
    }
    if(remember>0) res.push_back(remember+'0');
    reverse(res.begin(),res.end());
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string a,b; cin >> a >> b;
        cout << tong(a,b) << "\n";
    }
    return 0;
}