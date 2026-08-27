#include <bits/stdc++.h>
using namespace std;
struct State {
    int r,c,d;
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    vector<vector<int>> a(1005,vector<int>(1005));
    const int dr[4]={-1,0,1,0};
    const int dc[4]={0,1,0,-1};
    while(t--) {
        int n,m; cin >> n >> m;
        int sr,sc,tr,tc; //start_row, start_col, target_row, target_col
        cin >> sr >> sc >> tr >> tc;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
        if(a[sr][sc]==0||a[tr][tc]==0) {
            cout << -1 << "\n";
            continue;
        }
        if(sr==tr&&sc==tc) {
            cout << 0 << "\n";
            continue;
        }
        queue<State> q;
        q.push({sr,sc,0});
        a[sr][sc]=0;
        bool check=false;
        while(!q.empty()) {
            State curr=q.front();
            q.pop();
            if(curr.r==tr&&curr.c==tc) {
                cout << curr.d << "\n";
                check=true;
                break;
            }
            for(int i=0;i<4;i++) {
                int nr=curr.r+dr[i];
                int nc=curr.c+dc[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&a[nr][nc]==1) {
                    a[nr][nc]=0;
                    q.push({nr,nc,curr.d+1});
                }
            }
        }
        if(!check) cout << -1 << "\n";
    }
    return 0;
}