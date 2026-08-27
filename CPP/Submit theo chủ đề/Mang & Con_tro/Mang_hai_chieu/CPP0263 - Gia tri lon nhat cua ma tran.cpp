#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    const int MAX=405;
    int n; cin >> n;
    int a[MAX][MAX];
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin >> a[i][j];
    int chinh[MAX][MAX]={0},phu[MAX][MAX]={0};
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) {
        chinh[i][j]=a[i][j]+chinh[i-1][j-1];
        phu[i][j]=a[i][j]+phu[i-1][j+1];
    }
    int res=INT_MIN;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) for(int k=0;i+k<=n&&j+k<=n;k++) {
        int tongChinh=chinh[i+k][j+k]-chinh[i-1][j-1];
        int tongPhu=phu[i+k][j]-phu[i-1][j+k+1];
        res=max(res,tongChinh-tongPhu);
    }
    cout << res;
    return 0;
}