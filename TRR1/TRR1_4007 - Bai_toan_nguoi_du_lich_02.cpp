#include <bits/stdc++.h>
using namespace std;
int n,a[35][35],visited[35],mincost=INT_MAX;
vector<int> res_path,curr_path;
void backtrack(int curr_pos,int curr_cost) {
    if(curr_cost>=mincost) return;
    if(curr_path.size()==n) {
        curr_cost+=a[curr_pos][1];
        if(curr_cost<mincost) {
            mincost=curr_cost;
            res_path=curr_path;
        }
        return;
    }
    for(int i=2;i<=n;i++) {
        if(visited[i]==0) {
            curr_path.push_back(i);
            visited[i]=1;
            backtrack(i,curr_cost+a[curr_pos][i]);
            curr_path.pop_back();
            visited[i]=0;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin >> a[i][j];
    curr_path.push_back(1);
    visited[1]=1;
    backtrack(1,0);
    cout << mincost << '\n';
    for(auto x:res_path) cout << x << ' ';
    return 0;
}
/* Đề bài sai 
=> Excepted output:
5
2 4 3 1
*/