#include <stdio.h>
#include <string.h>
int check_balanced(char *s) {
    char stack[100005];
    int top=-1;
    int len = strlen(s);
    for (int i=0;i<len;i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (top == -1) return 0; 
            if (c == ')' && stack[top] != '(') return 0;
            if (c == ']' && stack[top] != '[') return 0;
            if (c == '}' && stack[top] != '{') return 0;
            top--;
        }
        else if (c == '\'' || c == '\"') {
            if (top != -1 && stack[top] == c) {
                top--; 
            } else {
                stack[++top] = c; 
            }
        }
    }
    return top == -1;
}

int main() {
    char s[100005];
    if (scanf("%s",s) == 1) {
        printf("%d\n",check_balanced(s));
    }
    return 0;
}