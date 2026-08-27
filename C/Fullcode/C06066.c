#include <stdio.h>
#include <string.h>
void add_strings(char *s1,char *s2,char *res) {
    int len1 = strlen(s1), len2 = strlen(s2);
    int max_len = (len1>len2) ? len1:len2;
    int carry=0,k=0;
    char temp[205];
    for (int i = 0; i < max_len; i++) {
        int d1=(len1-1-i>=0) ? (s1[len1 - 1 - i] - '0') : 0;
        int d2=(len2-1-i>=0) ? (s2[len2 - 1 - i] - '0') : 0;
        int sum=d1+d2+carry;
        temp[k++] = (sum % 10) + '0';
        carry=sum/10;
    }
    if (carry) temp[k++] = carry + '0';
    for (int i=0;i<k;i++) {
        res[i] = temp[k-1-i];
    }
    res[k] = '\0';
}

int main() {
    char s[205];
    if (scanf("%s", s) == 1) {
        while (strlen(s) > 1) {
            int len = strlen(s);
            int mid=len/2;
            char left[205] = {0}, right[205] = {0}, next_s[205] = {0};
            strncpy(left,s,mid);
            strcpy(right,s+mid);
            add_strings(left,right,next_s);
            strcpy(s,next_s);
            printf("%s\n",s);
        }
    }
    return 0;
}