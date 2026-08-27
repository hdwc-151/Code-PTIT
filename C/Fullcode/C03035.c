#include <stdio.h>

int gcd(int a, int b) {
    while (b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int dao_nguoc(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

void solve() {
    int n;
    scanf("%d", &n);
    
    int m = dao_nguoc(n); 
    
    if (gcd(n, m) == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}