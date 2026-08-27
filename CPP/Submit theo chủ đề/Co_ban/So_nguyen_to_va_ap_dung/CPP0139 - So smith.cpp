#include <bits/stdc++.h>
using namespace std;
int isPrime(int n) {
    if(n<2||n>2&&n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}
int sum(int n) {
    int s=0;
    while(n>0) {
        s+=n%10;
        n/=10;
    }
    return s;
}
void testcase() {
    int n; cin >> n;
    if(isPrime(n)) {
        cout << "NO\n";
        return;
    }
    int s1=sum(n),s2=0;
    for(int i=2;i*i<=n;i++) {
        while(n%i==0) {
            s2+=sum(i);
            n/=i;
        }
        if(n==1) break;
    }
    if(n>1) s2+=sum(n);
    s1==s2?cout<<"YES\n":cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) testcase();
    return 0;
}