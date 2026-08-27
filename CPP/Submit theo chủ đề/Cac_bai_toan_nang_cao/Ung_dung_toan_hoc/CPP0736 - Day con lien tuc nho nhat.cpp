#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int min_len=1e9,left=0;
        long long sum=0;
        for(int right=0;right<n;right++) {
            sum+=a[right];
            while(sum>x&&left<=right) {
                min_len=min(min_len,right-left+1);
                sum-=a[left];
                left++;
            }
        }
        if(min_len==1e9) cout << -1 << "\n";
        else cout << min_len << "\n";
    }
    return 0;
}