#include <stdio.h>
#include <math.h>
int is_prime(int n) {
    if (n<2) 
	return 0;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i == 0) 
	return 0;
    }
    return 1;
}

void solve() {
    int n;
    scanf("%d",&n);
    int present[1005] = {0};
    for (int i=0;i<n;i++) {
        int x;
        scanf("%d",&x);
        present[x] = 1;
    }
    for (int i=2;i<=1000;i++) {
        if (present[i] && is_prime(i)) {
            printf("%d ",i);
        }
    }
    printf("\n");
}

int main() {
    int t;
    if (scanf("%d",&t) == 1) {
        while (t--) 
		solve();
    }
    return 0;
}