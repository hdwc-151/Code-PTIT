#include <stdio.h>
#include <math.h>
void solve(int t) {
    int n;
    scanf("%d",&n);
    printf("Test %d: ",t);
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
            int dem=0;
            while(n%i==0) {
                n /= i;
                dem++;
            }
            printf("%d(%d) ",i,dem);
        }
    }
    if(n>1) {
        printf("%d(1)",n);
    }
    printf("\n");
}

int main () {
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
        solve(t);
    return 0;
}