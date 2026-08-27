#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool ThuanNghich(char s[], int len) {
    for (int i=0;i<len/2;i++) {
        if (s[i] != s[len-1-i]) return 0;
    }
    return 1;
}

typedef struct {
    char word[105];
    int count;
} WordInfo;

int main() {
    char s[105];
    int maxLen=0;
    WordInfo res[10005];
    int n=0;
    while (scanf("%s",s) != EOF) {
        int len=strlen(s);
        if (len < maxLen) continue;
        if (ThuanNghich(s,len)) {
            if (len>maxLen) {
                maxLen=len;
                n=0; 
                strcpy(res[n].word,s);
                res[n].count=1;
                n++;
            } 
            else {
                bool found=0;
                for (int i=0;i<n;i++) {
                    if (strcmp(res[i].word, s) == 0) {
                        res[i].count++;
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    strcpy(res[n].word, s);
                    res[n].count = 1;
                    n++;
                }
            }
        }
    }
    for (int i=0;i<n;i++) {
        printf("%s %d\n",res[i].word,res[i].count);
    }
    return 0;
}