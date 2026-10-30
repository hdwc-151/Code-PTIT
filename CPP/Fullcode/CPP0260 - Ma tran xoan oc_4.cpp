#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> a(n*n); vector<vector<int>> b(n,vector<int>(n));
    for(auto &x:a) cin >> x;
    sort(a.begin(),a.end());
    int row=n-1,col=n-1,id=0,d=0; //d <-> bound
    while(id<n*n) {
    for(int i=d;i<=col;i++)
        b[d][i]=a[id++];
    for(int i=d+1;i<=row;i++)
        b[i][col]=a[id++];
    for(int i=col-1;i>=d;i--)
        b[row][i]=a[id++];
    for(int i=row-1;i>d;i--)
        b[i][d]=a[id++];
    d++,row--,col--;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) cout << b[i][j] << " ";
        cout << "\n";
    }
    return 0;
}