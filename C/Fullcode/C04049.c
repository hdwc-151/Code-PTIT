#include <stdio.h>
long long gcd(long long a,long long b) {
    while (b) {
        long long t=a%b;
        a=b;
        b=t;
    }
    return a;
}

long long lcm(long long a,long long b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    int n;
    scanf("%d",&n);
    long long a[1005],b[1005];
    for (int i=0;i<n;i++) {
        scanf("%lld",&a[i]);
    }
    b[0] = a[0];
    for (int i=1;i<n;i++) {
        b[i] = lcm(a[i-1], a[i]);
    }
    b[n] = a[n - 1];
    for (int i=0;i<=n;i++) {
        printf("%lld ",b[i]);
    }
    printf("\n");
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) 
            solve();
    }
    return 0;
}