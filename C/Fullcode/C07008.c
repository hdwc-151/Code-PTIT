#include <stdio.h>
#include <string.h>
void parse(char *s,int *poly) {
    char *p = s;
    int c,e,offset;
    while (sscanf(p,"%d*x^%d%n",&c,&e,&offset) == 2) {
        poly[e] += c;
        p += offset;
        while (*p && *p != '+') p++;
        if (*p == '+') p++;
    }
}

void solve() {
    char s[100005];
    int poly[10005]={0};
    fgets(s,sizeof(s),stdin);
    parse(s,poly);
    fgets(s,sizeof(s), stdin);
    parse(s,poly);
    int first=1;
    for (int i=10000;i>=0;i--) {
        if (poly[i] != 0) {
            if (!first) printf(" + ");
            printf("%d*x^%d",poly[i],i);
            first=0;
        }
    }
    printf("\n");
}

int main() {
    int t;
    if (scanf("%d",&t) == 1) {
        while (getchar() != '\n');
        while (t--) {
            solve();
        }
    }
    return 0;
}