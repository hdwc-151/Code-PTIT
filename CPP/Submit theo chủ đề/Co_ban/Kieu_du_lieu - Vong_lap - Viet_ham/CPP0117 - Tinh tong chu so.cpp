#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        while(n>=10) {
            int sum=0;
            while(n>0) {
                sum+=n%10;
                n/=10;
            }
            n=sum;
        }
        cout << n << "\n";
    }
    return 0;
}