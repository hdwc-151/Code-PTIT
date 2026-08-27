#include <stdio.h>
long long fib[95];
void precompute() {
    fib[1] = 1;
    fib[2] = 1;
    for (int i=3;i<=92;i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

void solve() {
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i=a;i<=b;i++) {
        printf("%lld ",fib[i]);
    }
    printf("\n");
}

int main() {
    precompute();
    int t;
    if (scanf("%d",&t) == 1 && t <= 10) {
        while (t--) 
            solve();
    }
    return 0;
}