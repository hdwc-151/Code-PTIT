#include <stdio.h>
int main () {
    int a,b;
    scanf("%d %d",&a,&b);
    // NÊN cách ra để có thói quen, đây chỉ là kiểu số nguyên thì máy vẫn hiểu, còn %c thì sẽ vô nghĩa -> crash
    printf("%d",a+b);
    return 0;
}
/* Mặc dù với số nguyên (%d) hoặc số thực (%f) thì viết dính liền không sao, nhưng với ký tự (%c) thì rất khác biệt.
scanf("%c%c", &x, &y);: Sẽ đọc 2 ký tự liên tiếp (bao gồm cả dấu cách hoặc dấu Enter).
scanf("%c %c", &x, &y);: Dấu cách ở giữa bảo scanf bỏ qua các khoảng trắng để tìm ký tự có nghĩa tiếp theo.*/