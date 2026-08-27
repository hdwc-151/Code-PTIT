#include <stdio.h>
#include <string.h>
int get_rotations(char *src,char *target,int len) {
    char temp[105];
    strcpy(temp,src);
    strcat(temp,src);
    char *ptr = strstr(temp,target);
    if (ptr == NULL) 
        return -1;
        return ptr - temp;
}

int main() {
    int n;
    while (scanf("%d",&n) == 1) {
        char s[55][55];
        for (int i=0;i<n;i++) {
            scanf("%s",s[i]);
        }
        int len = strlen(s[0]);
        int min_steps = 1000000;
        for (int i=0;i<len;i++) {
            char target[55];
            strncpy(target,s[0] + i,len-i);
            strncpy(target+len-i,s[0],i);
            target[len] = '\0';
            int current_steps=0;
            int possible=1;
            
            for (int j=0;j<n;j++) {
                int steps = get_rotations(s[j],target,len);
                if (steps == -1) {
                    possible=0;
                    break;
                }
                current_steps += steps;
            }
            if (possible && current_steps < min_steps) {
                min_steps=current_steps;
            }
        }
        if (min_steps == 1000000) {
            printf("-1\n");
        } 
        else {
            printf("%d\n", min_steps);
        }
    }
    return 0;
}