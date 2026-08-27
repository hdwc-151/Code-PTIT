#include <stdio.h>
int prime(int n) {
    if(n<2||(n>2 && n%2==0)) return 0;
    for(int i=3;i*i<=n;i+=2)  if(n%i==0) return 0;
    return 1;
}

void solve() {
    int n;scanf("%d",&n);
    int a[101],b[101],nb=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(prime(a[i])) b[nb++]=a[i];
    }
    for(int i=0;i<nb;i++) printf("%d ",b[i]);
    printf("\n");
}

int main () {
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}