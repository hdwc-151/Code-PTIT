#include <stdio.h>
void solve() {
    int n;
    scanf("%d",&n);
    int a[1005];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int res[1005];
    int count=0;
    int max_val=-1;
    for (int i=n-1;i>=0;i--) {
        if (a[i] > max_val) {
            res[count++] = a[i];
            max_val = a[i];
        }
    }
    for (int i=count-1;i>= 0;i--) {
        printf("%d ",res[i]);
    }
    printf("\n");
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