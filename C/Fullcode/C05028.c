#include <stdio.h>
int main() {
    int n;
    if (scanf("%d",&n) == 1) {
        int a[15][15];
        for (int i=0;i<n;i++) {
            char row[15];
            scanf("%s",row);
            for (int j=0;j<n;j++) {
                a[i][j] = row[j] - '0';
            }
        }
        int steps=0;
        for (int i=n-1;i>=0;i--) {
            for (int j=n-1;j>=0;j--) {
                if (a[i][j] == 1) {
                    steps++;
                    for (int r=0;r<=i;r++) {
                        for (int c=0;c<=j;c++) {
                            a[r][c] = 1 - a[r][c]; 
                        }
                    }
                }
            }
        }
        printf("%d\n",steps);
    }
    return 0;
}