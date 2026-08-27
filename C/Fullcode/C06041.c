#include <stdio.h>
#include <string.h>
int main() {
    char s[100005], res[100005];
    if (scanf("%s",s) == 1) {
        int len = strlen(s);
        char max_char = 'a' - 1;
        int k=0;
        for (int i=len-1;i>=0;i--) {
            if (s[i] >= max_char) {
                max_char = s[i];
                res[k++] = s[i];
            }
        }
        for (int i=k-1;i>=0;i--) {
            putchar(res[i]);
        }
        printf("\n");
    }
    return 0;
}