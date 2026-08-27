#include <stdio.h>
#include <math.h>
int phep_tinh_giai_thua(int k) {
    int result=1;
    for(int i=1;i<=k;i++) 
        result=result*i;
    return result;
}

int main () {
    int n;
    scanf("%d",&n);
    long long sum=0;
    long long gia_tri=n;
    while(gia_tri>0) {
        sum += phep_tinh_giai_thua(gia_tri%10);
        gia_tri/=10;
    }
    if(sum==n)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}