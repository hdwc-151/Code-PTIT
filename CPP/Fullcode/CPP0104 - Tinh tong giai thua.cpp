#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    long long factorial=1,sum=0;
    for(int i=1;i<=n;i++) {
        factorial*=i;
        sum+=factorial;
    }
    cout << sum;
    return 0;
}