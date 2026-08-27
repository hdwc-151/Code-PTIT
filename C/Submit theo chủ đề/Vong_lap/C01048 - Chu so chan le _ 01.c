#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int even=0,odd=0,number;
    while(n>0) {
        number=n%10;
        if(number%2==0) even++;
        else odd++;
        n/=10;
    }
    printf("%d %d",even,odd);
    return 0;
}