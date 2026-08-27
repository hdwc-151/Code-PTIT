#include <stdio.h>

void solve() {
    long long n;
    scanf("%lld", &n);
    long long original = n;
    long long reverse = 0;
    while(n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (original == reverse) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}