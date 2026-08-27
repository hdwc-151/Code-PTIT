#include <bits/stdc++.h>
using namespace std;
int isPrime(long long n) {
    if(n<2||n>2&&n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}
void testcase() {
    long long n; cin >> n;
    long long result=0;
    for(long long i=2;i*i<=n;i++) 
        if(n%i==0) {
            result=i;
            while(n%i==0) n/=i;
    }
    if(n>1) result=n;
    cout << result << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) testcase();
    return 0;
}