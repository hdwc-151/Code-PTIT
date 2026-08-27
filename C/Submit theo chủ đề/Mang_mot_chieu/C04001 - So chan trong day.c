#include <stdio.h>
void solve() {
    int n;scanf("%d",&n);
    int a[101],b[101],nb=0; //nb=number of b
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]%2==0) b[nb++]=a[i];
    }
    for(int i=0;i<nb;i++) printf("%d ",b[i]);
    printf("\n");
}

int main () {
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}