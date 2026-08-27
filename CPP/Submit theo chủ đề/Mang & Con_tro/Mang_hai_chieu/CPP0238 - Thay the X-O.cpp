#include <bits/stdc++.h>
using namespace std;
void DFS(int i,int j,int n,int m,vector<vector<char>> &a) {
    if(i<0||i>=n||j<0||j>=m||a[i][j]!='O') return;
    a[i][j]='*';
    DFS(i-1,j,n,m,a);
    DFS(i+1,j,n,m,a);
    DFS(i,j-1,n,m,a);
    DFS(i,j+1,n,m,a);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        vector<vector<char>> a(n,vector<char>(m));
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
        //Quét viền trên-dưới
        for(int j=0;j<m;j++) {
            if(a[0][j]=='O') DFS(0,j,n,m,a);
            if(a[n-1][j]=='O') DFS(n-1,j,n,m,a);
        }
        //Quét viền trái-phải
        for(int i=0;i<n;i++) {
            if(a[i][0]=='O') DFS(i,0,n,m,a);
            if(a[i][m-1]=='O') DFS(i,m-1,n,m,a);
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(a[i][j]=='O') cout << "X ";
                else if(a[i][j]=='*') cout << "O ";
                else cout << "X ";
            }
            cout << "\n";
        }
    }
    return 0;
}