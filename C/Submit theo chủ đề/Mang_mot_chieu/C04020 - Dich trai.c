#include <stdio.h>
int main() {
    int n; scanf("%d",&n);
    int a[101];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int m; scanf("%d",&m);
    m=m%n;
    for(int i=0;i<n;i++) printf("%d ",a[(i+m)%n]);
    //for(int i=0;i<n;i++) printf("%d ",(i<n-m)?a[i+m]:a[i-(n-m)]);
    return 0;
}