#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0) {
        sum += n%10;
        //Chia lấy phần dư của n nhét vào tổng
        n /= 10;
        //Chia lấy phần nguyên -> Bỏ đi số hàng đơn vị -> Cập nhận n mới cho vòng lặp tiếp theo
    }
    printf("%d",sum);
    return 0;
}