#include <stdio.h>
int main() {
    int n;
    if (scanf("%d",&n) == 1) {
        int T[105],D[105];
        for (int i=0;i<n;i++) {
            scanf("%d %d",&T[i],&D[i]);
        }
        for (int i=0;i<n-1;i++) {
            for (int j=0;j<n-i-1;j++) {
                if (T[j] > T[j+1]) {
                    int tempT = T[j]; T[j] = T[j+1]; T[j+1] = tempT;
                    int tempD = D[j]; D[j] = D[j+1]; D[j+1] = tempD;
                }
            }
        }
        long long current_time = 0;
        for (int i=0;i<n;i++) {
            if (current_time < T[i]) {
                current_time = T[i];
            }
            current_time += D[i]; // Cộng thêm thời gian làm thủ tục
        }
        printf("%lld\n",current_time);
    }
    return 0;
}