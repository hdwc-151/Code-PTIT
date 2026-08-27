/* interchane sort solution O(N^2)
#include <stdio.h>
void swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int n; scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(a[j]<a[i]) swap(&a[i],&a[j]);
    //Interchange Sort
    printf("%d ",a[0]);
    for(int i=1;i<n;i++) 
        if(a[i]>a[0]) {
            printf("%d",a[i]); break;
        }
    return 0;
}
*/

#include <stdio.h>
int main() {
    int n; scanf("%d",&n);
    int min1=1e9,min2=1e9;
    for(int i=0;i<n;i++) {
        int val; scanf("%d",&val);
        if(val<min1) {
            min2=min1;
            min1=val;
        }
        else if(val<min2&&val!=min1) min2=val;
    }
    printf("%d %d",min1,min2);
    return 0;
}