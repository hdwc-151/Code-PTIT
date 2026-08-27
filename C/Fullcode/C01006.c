#include <stdio.h>
int main () {
    int a,b;
    scanf("%d%d",&a,&b);
    if(b==0) {
        printf("0");
        return 0;
    }
    printf("%d %d %d %.2f %d",a+b,a-b,a*b,(float)a/b,a%b);
/*Guard Clause (Mệnh đề bảo vệ).Tư duy là: "Kiểm tra các trường hợp lỗi hoặc đặc biệt (như b=0) trước. Nếu gặp thì xử lý và đuổi về (return) luôn. 
Phần còn lại của code dành cho trường hợp xử lý chính."Đề bài yêu cầu: "Nếu b = 0 thì không thực hiện phép toán nào mà chỉ in ra số 0". 
Việc dùng return 0 ngay sau khi in số 0 đảm bảo chính xác yêu cầu này và giúp code phía sau không cần quan tâm đến việc $b=0$ nữa.*/
    return 0;
}