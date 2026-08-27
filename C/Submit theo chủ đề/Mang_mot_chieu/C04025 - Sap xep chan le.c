/*
#include <stdio.h>
 swap(int*a,int*b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int n; scanf("%d",&n);
    int a[101],even[101],odd[101],ne=0,no=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        (a[i]%2==0)?(even[ne++]=a[i]):(odd[no++]=a[i]); 
    }
    for(int i=0;i<ne;i++) {
        for(int j=i+1;j<ne;j++)
            if(even[j]<even[i])
                swap(&even[i],&even[j]);
            printf("%d ",even[i]);
    }
    for(int i=0;i<no;i++) {
        for(int j=i+1;j<no;j++)
            if(odd[j]<odd[i])
                swap(&odd[i],&odd[j]);
            printf("%d ",odd[i]);
    }
    return 0;
}
*/

/*qsort và cmp
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b) {
    return (*(int*)a-*(int*)b);
}
int main() {
    int n; scanf("%d",&n);
    int even[101],odd[101],ne=0,no=0;
    for(int i=0;i<n;i++) {
        int val; scanf("%d",&val);
        (val%2==0)?(even[ne++]=val):(odd[no++]=val);
    }
    qsort(even,ne,sizeof(int),cmp);
    qsort(odd,no,sizeof(int),cmp);
    for(int i=0;i<ne;i++) printf("%d ",even[i]);
    for(int i=0;i<no;i++) printf("%d ",odd[i]);
    return 0;
}
*/

//Optimization
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b) {
    int x=*(int*)a;
    int y=*(int*)b;
    int x_is_even=(x%2==0);
    int y_is_even=(y%2==0);
    return (x_is_even!=y_is_even)?(x_is_even?-1:1):(x-y);
    //Logic: Xem x và y có cùng chẵn-lẻ không -> True: x chẵn, y lẻ -> return -1 <-> qsort xếp x trước y || False: x lẻ, y chẵn -> return 1 <-> qsort đẩy x sau y || Nếu x,y cùng chẵn-lẻ x>y => sắp x ra sau (số dương) <-> tăng dần || x<y => sắp x ra trước (số âm)
}
int main() {
    int n; scanf("%d",&n);
    int a[101];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}