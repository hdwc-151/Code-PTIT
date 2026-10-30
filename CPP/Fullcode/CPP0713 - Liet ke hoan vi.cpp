#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) a[i]=i+1;
        do {
            for(int i=0;i<n;i++) cout << a[i];
            cout << " ";
        } while(next_permutation(a.begin(),a.end()));
    cout << "\n";
    }
    return 0;
}