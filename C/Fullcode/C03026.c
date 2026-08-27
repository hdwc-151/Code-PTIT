#include <stdio.h>
int thuan_nghich(int n) {
    long long so=n;
    long long dao=0;
    while(n>0) {
        dao=dao*10+n%10;
        n /= 10;
    }
    return(so==dao);
}

int main () {
    int a,b;
    scanf("%d %d,&a,&b");
    int check01=thuan_nghich(a);
    int check02=thuan_nghich(b);
    if(check01!=check02)
        printf("YES");
    else
        printf("NO");
    return 0;
}