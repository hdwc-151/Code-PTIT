#include <bits/stdc++.h>
using namespace std;
int isPrime(int n) {
    if(n<2||n>2&&n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    isPrime(n)?cout<<"YES":cout<<"NO";
    return 0;
}