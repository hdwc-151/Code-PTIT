#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Thay đổi tham số truyền vào thành long long
bool check(long long n) {
    long long sum = 0, res = 0, a = n;
    while (a > 0) {
        int digit = a % 10;
        res = res * 10 + digit;
        sum += digit; // Cộng trực tiếp chữ số vào tổng
        a /= 10;
    }
    // Kiểm tra tổng chữ số chia hết cho 10 và là số đối xứng
    if (sum % 10 != 0)
        return false;
    if (res != n)
        return false;
    return true;
}

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    
    int dem = 0;
    // Sử dụng long long cho phạm vi lớn và ép kiểu pow()
    long long l = (long long)pow(10, n - 1);
    long long r = (long long)pow(10, n) - 1;

    for (long long i = l; i <= r; i++) {
        if (check(i))
            dem++;
    }
    printf("%d\n", dem);
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--)
        solve();
    return 0;
}