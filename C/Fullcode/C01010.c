#include <stdio.h>
int main () {
    int d,w=0,y=0;
    scanf("%d",&d);
    if(d>=365) {
        y = d/365; //Greedy -> Lấy số năm lớn nhất = cách đổi ra đơn vị năm trước
        d = d%365; // Cập nhật lại số days -> Số ngày thừa trong năm chuyển xuống tuần
    }
    if(d>7) {
        w = d/7;
        d = d%7;
    }
    printf("%d %d %d",y,w,d);
    return 0;
}

/*int main() {
    int d;
    scanf("%d", &d);

    int y = d / 365;    // Tính thẳng số năm
    d = d % 365;        // Số ngày còn lại

    int w = d / 7;      // Tính thẳng số tuần
    d = d % 7;          // Số ngày lẻ còn lại

    printf("%d %d %d", y, w, d);
    return 0;
}*/