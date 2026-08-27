#include <stdio.h>
int main () {
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0) {
        printf("0");
        return 0;
    }
    printf("%d %d %d %.2lf %d",a+b,a-b,a*b,(float)a/b,a%b);
    return 0;
}