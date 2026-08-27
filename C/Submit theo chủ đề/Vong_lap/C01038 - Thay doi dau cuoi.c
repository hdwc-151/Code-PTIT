/*Dung ham pow
#include <stdio.h>
#include <math.h>
int main () {
    int n; scanf("%d",&n);
    int tmp=n,cnt=0,first,last=n%10;
    while(tmp>0) {
        if(tmp<10) first=tmp;
        cnt++;
        tmp/=10;
    }
    n=n-last-first*(int)pow(10,cnt-1)+first+last*(int)pow(10,cnt-1);
    printf("%d",n);
    return 0;
}
*/

//Anti pow
#include <stdio.h>
int main () {
    int n; scanf("%d",&n);
    int tmp=n,first,last=n%10,he_so=1;
    while(tmp>10) {
        tmp/=10;
        he_so*=10;
    }
    first=tmp;
    n=n-last-first*he_so;
    n=n+first+last*he_so;
    printf("%d",n);
    return 0;
}