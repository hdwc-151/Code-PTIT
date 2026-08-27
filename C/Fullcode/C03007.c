#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool so_nguyen_to(int n) {
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
        return 1;
}

bool kiem_tra_thuan_nghich(int n) {
    int N=n;
    int result=0;
    while(n>0) {
        result=result*10+n%10;
        n /= 10;
    }
    if(result==N)
        return 1;
    return 0;
}

void solve() {
    int a,b;
    scanf("%d %d",&a,&b);
    int dem=0;
    for(int i=a;i<=b;i++) {
        if(so_nguyen_to(i)&&kiem_tra_thuan_nghich(i)) {
            dem++;
            printf("%d ",i);
            if(dem%10==0)
                printf("\n");
        }
    }
    printf("\n");
}

int main () {
    int T;
    scanf("%d",&T);
    while(T--)
        solve();
    return 0;
}