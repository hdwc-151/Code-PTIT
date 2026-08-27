#include <stdio.h>
int main () {
    unsigned int x;
    unsigned int min,max;
    int first=1;
    while(scanf("%u",&x)==1) {
        if(first) {
            max=x;
            min=x;
            first=0;
        }
        else {
            if(x>max) max=x;
            if(x<min) min=x;
        }
    }
    if(!first) {
        printf("%u %u",max,min);
    }
    return 0;
}