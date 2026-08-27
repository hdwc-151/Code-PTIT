#include <stdio.h>
int main () {
    unsigned long long x,max;
    //Đọc số đầu tiên nhập vào, nếu đúng thì nhận tiếp giá -> Gán số vào biến max
    while(scanf("%llu",&max)==1) {
        //Đọc TẤT CẢ số còn lại -> Tiếp tục gán các biến còn lại vào biến x
        while(scanf("%llu",&x)==1)
        //Kiểm tra xem số nhập vào sau có lớn hơn max hay không
        if(x > max) {
            max=x;
            //Nếu có thì cập nhật mới max = x nhập vào sau
        }
        printf("%llu",max);
    }
    return 0;
}