#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin >> a[i][j];
    vector<int> p(n);
    iota(p.begin(),p.end(),0);
    int min_time=2e9;
    vector<int> choose;
    do {
        int curr_time=0;
        for(int i=0;i<n;i++) curr_time+=a[i][p[i]];
        if(curr_time<min_time) {
            min_time=curr_time;
            choose.clear();
            for(auto x:p) choose.push_back(x+1);
        } 
    } while(next_permutation(p.begin(),p.end()));
    cout << min_time << '\n';
    for(auto x:choose) cout << x << ' ';
    return 0;
}
/* Đề bài sai 
=> Excepted output:
5
2 4 3 1
*/