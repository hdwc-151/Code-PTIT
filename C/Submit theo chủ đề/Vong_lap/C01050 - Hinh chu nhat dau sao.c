//Optimization 
#include <stdio.h>
int main () {
    int a,b;if(scanf("%d%d",&a,&b)!=2) return 0;
    for(int i=1;i<=b;i++) {
        for(int j=1;j<=a;j++) {
            putchar((i==1||i==b||j==1||j==a)?'*':' ');
        }
        printf("\n");
    }
    return 0;
}
/*Naive:
#include <stdio.h>
int main () {
    int a,b;scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++) {
        for(int j=1;j<=a;j++) {
            if(i==1||i==b||j==1||j==a) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/