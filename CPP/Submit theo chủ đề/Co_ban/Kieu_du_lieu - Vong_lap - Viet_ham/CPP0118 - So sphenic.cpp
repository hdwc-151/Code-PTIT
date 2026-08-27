#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v;
        for(int i=2;i*i<=n;i++) {
            if(n%i==0) while(n%i==0) {
                v.push_back(i);
                n/=i;
            } 
            if(n==1) break;
        }
        if(n>1) v.push_back(n);
        (v.size()==3&&v[0]!=v[1]&&v[1]!=v[2])?cout<<"1\n":cout<<"0\n";
    }
    return 0;
}