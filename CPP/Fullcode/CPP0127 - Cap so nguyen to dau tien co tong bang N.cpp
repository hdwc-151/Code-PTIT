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
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool check=false;
        for(int i=2;i<=n/2;i++) 
            if(isPrime(i)&&isPrime(n-i)) {
                cout << i << " " << n-i << "\n";
                check=true;
                break;
            }
            if(!check) cout << "-1\n";
    }
    return 0;
}
//Hypothesis Goldbach

/*
#include <bits/stdc++.h>
using namespace std;
int isPrime(int n) {
    if(n<2||n>2&&n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}
void solve() {
    int n; cin >> n;
    for(int i=2;i<=n/2;i++) 
        if(isPrime(i)&&isPrime(n-i)) {
            cout << i << " " << n-i << "\n";
            return;
        }
    cout << "-1\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
*/