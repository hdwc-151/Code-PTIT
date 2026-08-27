#include <bits/stdc++.h>
using namespace std;
string hieu(string a,string b) {
    int len=max(a.length(),b.length());
    if(a.length()<len) a.insert(0,len-a.length(),'0');
    if(b.length()<len) b.insert(0,len-b.length(),'0');
    if(a<b) swap(a,b);
    string res="";
    res.reserve(len);
    int remember=0;
    for(int i=len-1;i>=0;i--) {
        int digit=(a[i]-'0')-(b[i]-'0')-remember;
        if(digit<0) {
            remember=1;
            digit+=10;
        }
        else remember=0;
        res.push_back(digit+'0');
    }
    reverse(res.begin(),res.end());
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string a,b; cin >> a >> b;
        cout << hieu(a,b) << "\n";
    }
    return 0;
}