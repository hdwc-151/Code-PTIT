#include <stdio.h>
int main() {
    int t;
    scanf("%lld", &t);
    while (t--) {
    //Dùng while để cài bộ test => nhập số test vào vòng lập chạy giảm dần về 0
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",n*2);
    }
    return 0;
}