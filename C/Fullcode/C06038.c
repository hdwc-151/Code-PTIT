#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void multiply(char *num,int k,char *res,int len) {
    int carry=0;
    for (int i=len-1;i>=0;i--) {
        int prod = (num[i] - '0') * k+carry;
        res[i] = (prod % 10) + '0';
        carry=prod/10;
    }
    res[len] = '\0';
    if (carry > 0) res[0] = 'X'; 
}

bool is_cyclic(char *orig,int len) {
    char temp[150];
    strcpy(temp,orig);
    strcat(temp,orig); 
    char res[65];
    for (int i=1;i<=len;i++) {
        multiply(orig,i,res,len);
        if (res[0] == 'X' || strstr(temp, res) == NULL) {
            return false;
        }
    }
    return true;
}

void solve() {
    char s[65];
    scanf("%s",s);
    if (is_cyclic(s, strlen(s))) 
        printf("YES\n");
    else 
        printf("NO\n");
}

int main() {
    int t;
    if (scanf("%d",&t) == 1) {
        while (t--) 
            solve();
    }
    return 0;
}