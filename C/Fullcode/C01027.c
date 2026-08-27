#include <stdio.h>
int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        int a,b;
        scanf("%d %d",&a,&b);
        while(b>0) { //Giải thuật Euclid
            int n=a%b;
            a=b;
            b=n;
        }
    printf("%d\n",a);
    }
    return 0;
}