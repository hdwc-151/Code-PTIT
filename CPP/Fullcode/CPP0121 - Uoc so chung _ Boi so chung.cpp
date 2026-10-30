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
long long LCM(int a,int b) {
    return (long long)a*b/GCD(a,b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int a,b; cin >> a >> b;
        int y=GCD(a,b);
        long long x=LCM(a,b);
        cout << x << " " << y << "\n";
    }
    return 0;
}