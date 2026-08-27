#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        deque<int> dq;
        for(int i=0;i<n;i++) {
            int x; cin >> x;
            dq.push_back(x);
        }
        int res=0;
        while(dq.size()>=2) {
            if(dq.front()==dq.back()) {
                dq.pop_front();
                dq.pop_back();
            }
            else if(dq.front()<dq.back()) {
                int temp=dq.front();
                dq.pop_front();
                dq.front()+=temp;
                res++;
            }
            else {
                int temp=dq.back();
                dq.pop_back();
                dq.back()+=temp;
                res++;
            }
        }
        cout << res << "\n";
    }
    return 0;
}