#include <bits/stdc++.h>
using namespace std;
int isPrime(int n) {
    if(n<2||n>2&&n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}
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
        int n; cin >> n;
        int count=1;
        for(int i=2;i<n;i++) if(GCD(i,n)==1) count++;
        isPrime(count)?cout<<"1\n":cout<<"0\n";
    }
    return 0;
}