#include <stdio.h>
int main () {
    int n;scanf("%d",&n);
    long long sum=0,factorial=1;
    for(int i=1;i<=n;i++) {
        factorial=factorial*i;
        sum+=factorial;
    }
    printf("%lld",sum);
    return 0;
}