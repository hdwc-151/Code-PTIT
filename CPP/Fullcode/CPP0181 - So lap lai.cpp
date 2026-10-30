#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b) {
    while(b>0) {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int a,p,q; cin >> a >> p >> q;
        int res=GCD(p,q);
        for(int i=1;i<=res;i++) cout << a;
        cout << "\n";
    }
    return 0;
}