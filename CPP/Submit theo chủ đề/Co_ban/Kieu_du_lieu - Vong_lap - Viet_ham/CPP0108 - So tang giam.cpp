#include <bits/stdc++.h>
using namespace std;
int isPrime(int n) {
    if(n<2||n>2&&n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}
int increase(int n) {
    int d=10;
    while(n>0) {
        if(d<=n%10) return 0;
        d=n%10;
        n/=10;
    }
    return 1;
}
int decrease(int n) {
    int d=-1;
    while(n>0) {
        if(d>=n%10) return 0;
        d=n%10;
        n/=10;
    }
    return 1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int l=pow(10,n-1);
        int r=pow(10,n)-1;
        int d=0;
        for(int i=l;i<=r;i++) if(increase(i)||decrease(i)) if(isPrime(i)) d++;
        cout << d << "\n";
    }
    return 0;
}