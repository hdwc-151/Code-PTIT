#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(auto &x:a) cin >> x;
        sort(a,a+n,greater<int>());
        int i=0,j=n-1;
        while(i<j) cout << a[i++] << " " << a[j--] << " "; //has been changed from here
        if(i==j) cout << a[i];
        cout << "\n";
    }
    return 0;
}