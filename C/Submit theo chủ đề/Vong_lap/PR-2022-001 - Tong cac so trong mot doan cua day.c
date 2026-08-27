#include <stdio.h>
int main () {
    int u0,d,n;scanf("%d%d%d",&u0,&d,&n);
    long long sum=0;
    int current_value=u0;
    for(int i=0;i<n;i++) {
        sum+=current_value;
        current_value+=d;
    }
    printf("%lld",sum);
}

/*Dùng tổng cấp số cộng
#include <stdio.h>
int main () {
    int u0,d,n;scanf("%d%d%d",&u0,&d,&n);
    long long sum=n*(2*u0+(n-1)*d)/2;
    printf("%lld",sum);
}
*/