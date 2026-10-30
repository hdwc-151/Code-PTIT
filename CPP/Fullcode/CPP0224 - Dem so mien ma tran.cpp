#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[100][100];
const int X[8]={-1,-1,-1,0,1,1,1,0};
const int Y[8]={-1,0,1,1,1,0,-1,-1};

void BFS(int r,int c) {
    for(int i=0;i<8;i++) {
        int x=r+X[i];
        int y=c+Y[i];
        if(x>=0&&x<n&&y>=0&&y<m&&a[x][y]==1) {
        a[x][y]=0;
        BFS(x,y);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        cin >> n >> m;
        for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin >> a[i][j];
        int res=0;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) 
            if(a[i][j]==1) {
                res++;
                BFS(i,j);
            }
            cout << res << "\n";
        }
        return 0;
}