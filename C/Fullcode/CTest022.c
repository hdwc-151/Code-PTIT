#include <stdio.h>
#include <string.h>

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            char s[25];
            scanf("%s", s);
            int len = strlen(s);
            
            if (len % 2 != 0) {
                printf("INVALID\n");
            } else {
                int half = len / 2;
                long long left = 0, right = 0;
                
                for (int i = 0; i < half; i++) {
                    left = left * 10 + (s[i] - '0');
                }
                for (int i = half; i < len; i++) {
                    right = right * 10 + (s[i] - '0');
                }
                
                long long a = left;
                long long b = right;
                
                while (b != 0) {
                    long long temp = a % b;
                    a = b;
                    b = temp;
                }
                
                long long gcd = a;
                if (gcd == 0) {
                    printf("0\n");
                } else {
                    long long lcm = (left / gcd) * right;
                    printf("%lld\n", lcm);
                }
            }
        }
    }
    return 0;
}