#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    char s[101] = {};
    gets(s);
    char res[101][101] = {}; 
    int n=0;
    char *token = strtok(s, " ");
    while (token != NULL) {
        bool check = true;
        for (int i = 0; i < n; i++) {
            if (strcmp(token, res[i]) == 0) {
                check = false;
                break;
            }
        }
        if (check == true)
        {
            strcpy(res[n],token);
            n++;
        }
        token = strtok(NULL, " ");
    }
    for (int i=0;i<n;i++)
        printf("%s ",res[i]);
    return 0;
}