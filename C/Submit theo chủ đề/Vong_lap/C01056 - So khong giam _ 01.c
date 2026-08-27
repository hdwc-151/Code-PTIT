#include <stdio.h>
int check(long long n) {
    int k=n%10;
    while(n>0) {
        if(n%10>k) return 0;
        k=n%10;
        n/=10;
    }
    return 1;
}
int main () {
    int t;scanf("%d",&t);
    while(t--) {
        long long n;scanf("%lld",&n);
        if(check(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

//Nếu nhét k vào trong, bạn luôn luôn tự lấy chữ số hiện tại so sánh với chính nó. Câu hỏi if (n % 10 > k) sẽ luôn luôn bị biến thành if (n % 10 > n % 10), một điều không bao giờ xảy ra.
//Hậu quả là hàm checke của bạn sẽ luôn luôn trả về 1 (YES) cho mọi con số trên đời