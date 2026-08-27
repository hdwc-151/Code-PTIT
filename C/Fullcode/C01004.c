#include <stdio.h>
int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        long long n;
        scanf("%lld",&n);
        printf("%.15lf\n",(double)1/n);
        // (double) nhằm ép số nguynê 1 về số thực 1.0 nếu không máy sẽ hiểu là số nguyên chia số nguyên và lấy "số nguyên chia số nguyên" => output =0 thay vì = số thực/thập phân
        // Ví dụ 1/n -> 1/2 = 0 ; (double) 1/n = 1/2 = 0.5
        // kiểu dữ liệu in ra số thực với đúng 15 "chữ số" sau dấu thập phân
    }
    return 0;
}
