#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> phihameuler(n+1,0);
    for(int i=1;i<=n;i++) phihameuler[i]=i;
    for(int i=2;i<=n;i++) {
        if(phihameuler[i]==i) {
            for(int j=i;j<=n;j+=i)
                phihameuler[j]-=phihameuler[j]/i;
        }
    }
    cout << accumulate(phihameuler.begin(),phihameuler.end(),0)+1;
    return 0;
}