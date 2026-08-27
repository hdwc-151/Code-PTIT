#include <stdio.h>
#include <stdbool.h>
bool check(long long n) {
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

int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        long long n;
        scanf("%lld",&n);
        if(check(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}