#include <stdio.h>
int main () {
    unsigned int x,min,max;
    if(scanf("%u",&x)==1) {
        //Lệnh này vừa thực hiện việc đọc số đầu tiên, vừa kiểm tra xem việc đọc có thành công hay không (thành công thì scanf trả về 1). Nếu thành công, nó mới cho phép chạy khối lệnh bên trong if.
        max=x;
        min=x;
        //Lưu tạm giá trị số đầu tiên vừa là số lớn nhất, vừa là số bé nhất
        while(scanf("%u",&x)==1) {
            //Bắt đầu vòng lặp. Nó sẽ liên tục đọc tất cả các số còn lại cho đến khi bạn dừng nhập (kết thúc file/gặp lỗi). Mỗi số đọc được sẽ ghi đè vào biến x
            if(x>max) max=x;
            else if(x<min) min=x;
        }
        printf("%u %u",max,min);
    }
    return 0;
}