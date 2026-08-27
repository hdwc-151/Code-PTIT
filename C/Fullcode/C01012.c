#include <stdio.h>
int main () {
    unsigned x;
    unsigned max=0;
    int first=1;
    while(scanf("%llu",&x)==1) {
        if(first) {
            max=x;
            first=0;
        }
        else {
            if(x>max)
                max=x;
        }
    }
    if(!first) {
        printf("%llu",max);
    }
    return 0;
}