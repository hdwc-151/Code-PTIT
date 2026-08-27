#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    long long sum=0;
    long long giai_thua=1;
    for(int i=1;i<=n;i++) {
        giai_thua=giai_thua*i;
        sum += giai_thua;
    }
    printf("%lld",sum);
    return 0;
}