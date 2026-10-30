#include <bits/stdc++.h>
using namespace std;
const int MAX=1e7;
vector<bool> eratosthenes(MAX+1,true);
vector<long long> prime;
void sieve() {
    eratosthenes[0]=eratosthenes[1]=false;
    for(long long i=2;i*i<=MAX;i++) if(eratosthenes[i]) for(long long j=i*i;j<=MAX;j+=i) eratosthenes[j]=false;
    for(long long i=2;i<=MAX;i++) if(eratosthenes[i]) prime.push_back(i);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        for(long long i:prime) {
            if(i*i>n) break;
            if(n%i==0) {
                int cnt=0;
                while(n%i==0) {
                    cnt++;
                    n/=i;
                }
                cout << i << " " << cnt << "\n";
            }
        }
        if(n>1) cout << n << " 1\n";
        cout << "\n";
    }
    return 0;
}