#include <bits/stdc++.h>
using namespace std;
int n,a[25][25],visited[25],maxrow[25],maxval=-1;
vector<int> res_choose,curr_choose;
void backtrack(int curr_id,int curr_val) {
    int temp=curr_val;
    for(int i=curr_id;i<=n;i++) temp+=maxrow[i];
    if(temp<=maxval) return;
    if(curr_choose.size()==n) {
        maxval=curr_val;
        res_choose=curr_choose;
        return;
    }
    for(int job=1;job<=n;job++)
        if(visited[job]==0) {
            curr_choose.push_back(job);
            visited[job]=1;
            backtrack(curr_id+1,curr_val+a[curr_id][job]);
            curr_choose.pop_back();
            visited[job]=0;
        }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin >> a[i][j];
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) maxrow[i]=max(maxrow[i],a[i][j]);
    backtrack(1,0);
    cout << maxval << '\n';
    for(auto x:res_choose) cout << x << ' ';
    return 0;
}