#include <stdio.h>
int main() {
    int m,n; scanf("%d%d",&n,&m);
    int a[100],b[100];
    for(int i=0;i<m;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    int p; scanf("%d",&p);
    for(int i=0;i<m+n;i++) {
        if(i<p) printf("%d ",a[i]);
        else if(i>=p&&i<p+n) printf("%d ",b[i-p]);
        else printf("%d ",a[i-n]);
    }
    return 0;
}