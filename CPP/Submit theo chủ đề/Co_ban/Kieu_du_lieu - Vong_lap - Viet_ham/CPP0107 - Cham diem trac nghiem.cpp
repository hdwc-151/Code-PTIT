#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string fi="ABBADCCABDCCABD",se="ACCABCDDBBCDDBB";
        int n; cin >> n;
        double r=0;
        if(n==101) {
            for(int i=0;i<15;i++) {
                char c; cin >> c;
                if(c==fi[i]) r+=2.0/3;
            }
        }
        else if(n==102) {
            for(int i=0;i<15;i++) {
                char c; cin >> c;
                if(c==se[i]) r+=2.0/3;
            }
        }
        cout << setprecision(2) << fixed << r << "\n";
    }
    return 0;
}