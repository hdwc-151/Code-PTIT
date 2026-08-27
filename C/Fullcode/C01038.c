#include <stdio.h>
#include <math.h>
int main () {
    int n;
    scanf("%d",&n);
    int x=n, dem=0;
    int dau,cuoi=n%10;
    while(x>0) {
        if(x<10) //Khi n chỉ còn số đầu tiên -> x
            dau=x;
            dem++; //Tăng biến đếm số chữ số
            x/=10; // Ngắt bỏ số đuôi
    }
    n=n-cuoi-dau*pow(10,dem-1)+dau+cuoi*pow(10,dem-1);
    printf("%lld",n);
    return 0;
}