#include <stdio.h>
int main () {
    int n;scanf("%d",&n);
    int sum=1;
    for(int i=2;i<=n/i;i++) {
        if(n%i==0) {
            sum+=i;
            sum+=n/i;
            if(i*i==n) sum-=i;
        }
    }
    if(sum==n) printf("1\n");
    else printf("0\n");
    return 0;
}

/*Optimization
#include <stdio.h>
int isPerfect(int n) {
    if(n<=1) return 0;
    int sum=1;
    for(int i=2;i<=n/i;i++) {
        if(n%i==0) {
            sum+=i;
        if(i!=n/i) sum+=n/i; -> Tránh cộng rồi trừ
        }
    }
    return sum==n;
}
int main () {
    int n;scanf("%d",&n);
    printf("%d",isPerfect(n));
    return 0;
}
*/