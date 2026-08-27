#include <stdio.h>
#include <stdlib.h> 
typedef struct {
    int a, b, c;
} TamGiac;

void nhap_tam_giac(TamGiac *tg) {
    scanf("%d %d %d",&tg->a,&tg->b,&tg->c);
}

long long tinh_dien_tich_toi_uu(TamGiac tg) {
    long long a=tg.a,b=tg.b,c=tg.c;
    return (a+b+c)*(a+b-c)*(b+c-a)*(c+a-b);
}

void in_tam_giac(TamGiac tg) {
    printf("%d %d %d\n",tg.a,tg.b,tg.c);
}

void ghi_file_nhi_phan(TamGiac mang_tg[], int n) {
    FILE *file=fopen("FPLSP22GxxmsvTG.fpl","wb");
    if (file != NULL) {
        fwrite(mang_tg,sizeof(TamGiac),n,file);
        fclose(file);
    }
}

int cmp(const void *ptr1,const void *ptr2) {
    TamGiac *tg1=(TamGiac *)ptr1;
    TamGiac *tg2=(TamGiac *)ptr2;
    
    long long s1=tinh_dien_tich_toi_uu(*tg1);
    long long s2=tinh_dien_tich_toi_uu(*tg2);
    
    if (s1>s2) return 1;
    if (s1<s2) return -1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    TamGiac danh_sach[10000];
    for (int i=0;i<n;i++) {
        nhap_tam_giac(&danh_sach[i]);
    }
    ghi_file_nhi_phan(danh_sach,n);
    qsort(danh_sach,n,sizeof(TamGiac),cmp);
    for (int i=0;i<n;i++) {
        in_tam_giac(danh_sach[i]);
    }
    return 0;
}