#include <stdio.h>
#include <string.h>
int main() {
    char s[55];
    if (scanf("%s",s) == 1) {
        int pos[26][2];
        memset(pos,-1,sizeof(pos));
        for (int i=0;i<52;i++) {
            int c = s[i] - 'A';
            if (pos[c][0] == -1) pos[c][0] = i;
            else pos[c][1] = i;
        }
        int ans = 0;
        for (int i=0;i<26;i++) {
            for (int j=i+1;j<26;j++) {
                int a1 = pos[i][0], a2 = pos[i][1];
                int b1 = pos[j][0], b2 = pos[j][1];
                if ((a1<b1 && b1<a2 && a2<b2) || (b1<a1 && a1<b2 && b2<a2)) {
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}