#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

bool check(char s[]) {
    int len=strlen(s);
    for(int i=0;i<len;i++) {
        int tg=s[i]-'0';
        if(tg%2!=0)
            return 0;
    }
    return 1;
}

int main () {
    int t;
    scanf("%d\n",&t);
    while(t--) {
        char s[20];
        scanf("%s",&s);
        if(check(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}