#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool check(int n) {
    int x=n%10;
    n /= 10;
    while(n>0) {
        if(n%10>x)
            return 0;
        x=n%10;
        n /= 10;
    }
    return 1;
}

void solve () {
    int n;
    scanf("%d",&n);
    int a=pow(10,n-1);
    int b=pow(10,n)-1;
    for(int i=a;i<=b;i++)
        if(check(i))
            printf("%d ",i);
    printf("\n");
}

int main () {
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}