#include <stdio.h>
#include <string.h>

typedef struct {
    char str[2505];
    double val;
} Item;

Item a[105];

void print_state(int n) {
    for (int i = 0; i < n; i++) printf("%s ", a[i].str);
    printf("\n");
    for (int i = 0; i < n; i++) printf("%.3lf ", a[i].val);
    printf("\n");
}

void initial_sort(int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].val > a[j].val) {
                Item temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sink_sort(int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i].val > a[i+1].val) {
            Item temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        } else {
            break; 
        }
    }
}

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    for (int i = 0; i < n; i++) scanf("%s", a[i].str);
    for (int i = 0; i < n; i++) scanf("%lf", &a[i].val);

    initial_sort(n);
    print_state(n);

    while (n > 1) {
        strcat(a[0].str, a[1].str);
        a[0].val += a[1].val;

        for (int i = 1; i < n - 1; i++) {
            a[i] = a[i+1];
        }
        n--;

        print_state(n);

        if (n > 1 && a[0].val > a[1].val) {
            sink_sort(n);
            print_state(n);
        }
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}