#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int id;
    char name[105];
    char group[105];
    double buy, sell, profit;
} Item;

int cmp(const void *a, const void *b) {
    Item *itemA = (Item *)a;
    Item *itemB = (Item *)b;
    if (itemB->profit > itemA->profit) return 1;
    if (itemB->profit < itemA->profit) return -1;
    return 0;
}

void remove_newline(char *s) {
    int len = strcspn(s, "\n");
    s[len] = '\0';
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    Item items[105];
    for (int i = 0; i < n; i++) {
        items[i].id = i + 1;
        
        scanf(" "); // Dọn dẹp bộ đệm chuẩn xác
        fgets(items[i].name, sizeof(items[i].name), stdin);
        remove_newline(items[i].name);
        
        fgets(items[i].group, sizeof(items[i].group), stdin);
        remove_newline(items[i].group);
        
        scanf("%lf %lf", &items[i].buy, &items[i].sell);
        items[i].profit = items[i].sell - items[i].buy;
    }

    qsort(items, n, sizeof(Item), cmp);

    for (int i = 0; i < n; i++) {
        printf("%d %s %s %.2lf\n", items[i].id, items[i].name, items[i].group, items[i].profit);
    }
    
    return 0;
}