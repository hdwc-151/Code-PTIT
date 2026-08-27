#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    if (fgets(s,sizeof(s),stdin) != NULL) {
        int len = strlen(s);
        while (len>0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
            len--;
        }
        if (len>0) {
            printf("%d\n",len-1);
        }
    }
    return 0;
}