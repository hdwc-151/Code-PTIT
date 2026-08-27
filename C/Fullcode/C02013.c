#include <stdio.h>
int main () {
    int a,b;
    scanf("%d %d",&a,&b);
    int gia_tri=b;
    if(gia_tri<a)
        gia_tri=a;
    for(int i=1;i<=a;i++) {
        int j=gia_tri;
        int check=0,dem=0;
        while(dem<b) {
            if(j==1) {
                check=1;
                dem++;
                printf("%d",j);
                j++;
                continue;
            }
            if(check==0) {
                printf("%d",j);
                j--;
                dem++;
                continue;
            }
            if(check==1) {
                printf("%d",j);
                j++;
                dem++;
                continue;
            }
        }
        printf("\n");
        gia_tri--;
    }
    return 0;
}