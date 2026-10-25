#include <bits/stdc++.h>
using namespace std;
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i))&1LL)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,b; cin >> n >> b;
    vector<int> weight(n),value(n);
    for(int i=0;i<n;i++) cin >> weight[i] >> value[i];
    int maxval=0;
    vector<int> choose;
    for(int i=0;i<MASK(n);i++) {
        int curr_weight=0,curr_val=0;
        for(int j=0;j<n;j++) 
            if(BIT(i,j)) {
                curr_weight+=weight[j];
                curr_val+=value[j];
            }
        if(curr_weight<=b&&curr_val>maxval) {
            maxval=curr_val;
            choose.clear();
            for(int j=0;j<n;j++) choose.push_back(BIT(i,j));
        }
    }
    cout << maxval << '\n';
    for(auto x:choose) cout << x << ' ';
    return 0;
}