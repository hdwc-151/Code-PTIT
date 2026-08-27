#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        long long a;
        string b;
        cin >> a >> b;
        long long num=0;
        for(char x:b) num=(num*10+x-'0')%a;
        cout << __gcd(a,num) << "\n";
    }
    return 0;
}