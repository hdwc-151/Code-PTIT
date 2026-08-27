#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        long long n,m; cin >> n >> m;
        long long sum=n*(n+1)/2,a=(sum+m)/2,b=sum-a;
        (a-b==m&&__gcd(a,b)==1)?cout<<"Yes":cout<<"No";
        cout << "\n";
    }
    return 0;
}