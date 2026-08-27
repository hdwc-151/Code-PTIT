#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,p; cin >> n >> p;
        int x=0;
        for(int i=1;i<=n;i++) 
            if(i%p==0) {
                int t=i;
                while(t%p==0) {
                    x++;
                    t/=p;
                }
            }
        cout << x << "\n";
    }
    return 0;
}