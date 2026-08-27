#include <stdio.h>
#include <math.h>
int snt(int n) {
    if(n<2) 
        return 0;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) 
            return 0;
    }
    return 1;
}

int dem_chu_so(int n) {
    int count=0;
    while(n>0) {
        count++;
        n /= 10;
    }
    return count;
}

int power_of_10(int exp) {
    int res=1;
    while(exp--) 
        res *= 10;
        return res;
}

int check_vong(int n) {
    if (!snt(n)) 
        return 0;
        int so_chu_so=dem_chu_so(n);
        int p=power_of_10(so_chu_so-1);
        int temp=n;
        for(int i=0;i<so_chu_so-1;i++) {
            int dau=temp/p;      
            int duoi=temp%p;  
            temp=duoi*10+dau;
        if(!snt(temp)) 
            return 0; 
        }
        return 1;
}

int main() {
    int t;
    if(scanf("%d",&t)==1) {
        while(t--) {
            int n;
            scanf("%d",&n);
            if(check_vong(n)) 
                printf("1 ");
            else 
                printf("0 ");
        }
    }
    return 0;
}