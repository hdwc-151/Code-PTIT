#include <stdio.h>
#include <math.h>
int so_nguyen_to(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        if (so_nguyen_to(n) == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}