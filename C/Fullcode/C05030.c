#include <stdio.h>
char A[1005][1005];
int row_count[1005][3];
int col_count[1005][3];

void solve() {
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i=0;i<n;i++) {
        row_count[i][1]=row_count[i][2]=0;
    }
    for (int j=0;j<m;j++) {
        col_count[j][1]=col_count[j][2]=0;
    }
    for (int i=0;i<n;i++) {
        scanf("%s",A[i]);
        for (int j=0;j<m;j++) {
            int color=A[i][j]-'0';
            if (color == 1 || color == 2) {
                row_count[i][color]++;
                col_count[j][color]++;
            }
        }
    }

    long long ans=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            int color=A[i][j]-'0';
            if (color == 1) {
                ans += (long long)row_count[i][2]*col_count[j][2];
            } else if (color == 2) {
                ans += (long long)row_count[i][1]*col_count[j][1];
            }
        }
    }
    
    printf("%lld\n",ans);
}

int main() {
    int t;
    if (scanf("%d",&t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}