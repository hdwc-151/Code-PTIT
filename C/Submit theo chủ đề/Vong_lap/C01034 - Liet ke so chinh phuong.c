#include <stdio.h>
#include <math.h>
int main () {
    int a,b; scanf("%d%d",&a,&b);
    int m=ceil(sqrt(a)), n=floor(sqrt(b));
    printf("%d\n",n-m+1);
    for(int i=m;i<=n;i++) {
        printf("%d\n",i*i);
    }
    return 0;
}

/*Naive: Logic 1 v, 1 vòng for in ra số chính 
#include <stdio.h>
#include <math.h>
int main() {
    int a,b; scanf("%d%d", &a, &b);
    int count=0;
    for(int i=a;i<=b;i++) {
        int root=sqrt(i); 
        if (root*root==i) { 
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=a;i<=b;i++) {
        int root=sqrt(i); 
        if (root*root==i) {
            printf("%d\n",i);
        }
    }
    return 0;
}
*/