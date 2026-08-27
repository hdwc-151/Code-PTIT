#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        long long b,p; cin >> b >> p;
        long long res=0;
        for(long long i=1;i<p;i++) 
            if((i*i)%p==1) {
                long long lase_number=i+p*(b/p);
                if(lase_number>b) lase_number-=p;
                res+=(lase_number-i)/p+1;
            }
        cout << res << "\n";
    }
    return 0;
}