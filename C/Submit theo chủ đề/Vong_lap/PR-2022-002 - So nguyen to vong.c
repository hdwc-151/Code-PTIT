/*Optimization
#include <stdio.h>
int prime(int n) {
    if(n<2) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}

int count_digit(int n) {
    int cnt=0,multi_digit=(n>9);
    while(n>0) {
        int digit=n%10;
        if(multi_digit && (digit%2==0 || digit==5)) return -1;
        cnt++;
        n/=10;
    }
    return cnt;
}

int circle(int n) {
    int digit_number=count_digit(n);
    if(digit_number==-1) return 0;
    if(!prime(n)) return 0;
    int power=1;
    for(int i=1;i<digit_number;i++) power*=10;
    
    int temp=n;
    for(int i=0;i<digit_number-1;i++) {
        int first=temp/power,last=temp%10;
        temp=last*10+first;
        if(!prime(temp)) return 0;
    }
    return 1;
}

int main () {
    int t;scanf("%d",&t);
    while(t--) {    
        int n;scanf("%d",&n);
        printf("%d ",circle(n)?1:0);
    }
    return 0;
}
*/

/*Tach rieng tung ham
#include <stdio.h>
int snt(int n) {
    for(int i=2;i<=n/i;i++) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int dem_chu_so(int n) {
    int cnt=0;
    while(n>0) {
        cnt++;
        n/=10;
    }
    return cnt;
}

int power_of_ten(int exp) {
    int res=1;
    while(exp--) res*=10;
    return res;
}

int check_vong(int n) {
    if(!snt(n)) return 0;
    int so_chu_so=dem_chu_so(n);
    int p=power_of_ten(so_chu_so-1);
    int tmp=n;
    for(int i=1;i<so_chu_so;i++) {
        int dau=tmp/p;
        int cuoi=tmp%p;
        tmp=cuoi*10+dau;
        if(!snt(tmp)) return 0;
    }
    return 1;
}

int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        printf("%d ",check_vong(n) ? 1 : 0);
    }
    return 0;
}
*/
/*Ngu hoc: Stack all
#include <stdio.h>
void solve() {
    int n;scanf("%d",&n);
    if(n<2 || (n>2 && n%2==0)) {
        printf("0 "); return;
    }
    for(int i=2;i*i<=n;i+=2) {
        if(n%i==0) {
            printf("0 "); return;
        }
    }

    int so_chu_so=0,temp_count=n;
    while(temp_count>0) {
        so_chu_so++;
        temp_count/=10;
    }

    int power=1;
    for(int i=1;i<so_chu_so;i++) power*=10;

    int temp=n;
    for(int i=1;i<so_chu_so;i++) {
        temp=(temp%power)*10+(temp/power);
        if(temp<2 || (temp>2 && temp%2==0)) {
            printf("0 "); return;
        }
        for(int j=3;j*j<=n;j+=2) {
            if(temp%j==0) {
                printf("0 "); return;
            }
        }
    }
    printf("1 ");
}

int main () {
    int t;scanf("%d",&t);
    while(t--) solve();
    return 0;
}
*/
/*Rewrite
#include <stdio.h>
int prime(int n) {
    if( n<2 || (n>2 && n%2==0) ) return 0;
    for(int i=3;i*i<=n;i+=2) {
        if(n%i==0) return 0;
    }
    return n>1;
}

int couting_digit(int n) {
    int cnt=0;
    while(n>0) {
        cnt++;
        n/=10;
    }
    return cnt;
}

int power_of_10(int exp) {
    int res=1;
    while(exp--) res*=10;
    return res;
}

int circle_check(int n) {
    if(!prime(n)) return 0;
    int digit=couting_digit(n);
    int power=power_of_10(digit-1);
    int tmp=n;
    for(int i=1;i<digit;i++) {
        int first=tmp/power;
        int last=tmp%power;
        tmp=last*10+first;
        if(!prime(tmp)) return 0;
    }
    return 1;
}

int main () {
    int t;scanf("%d",&t);
    while(t--) {
        int n;scanf("%d",&n);
        printf("%d ",(circle_check(n))?1:0);
    }
    return 0;
}
*/
/*
#include <stdio.h>
// 1. KIỂM TRA NGUYÊN TỐ HIỆU NĂNG CAO
int prime(int n) {
    // Loại bỏ trường hợp n âm, 1,0. Với n khác 2 và chia hết 2 -> Bỏ
    if( n<2 || (n>2 && n%2==0) ) return 0;
    // Nhảy bước 2, bỏ qua toàn bộ số chẵn
    for(int i=3;i*i<=n;i+=2) {
        if(n%i==0) return 0;
    }
    return 1;
}
// 2. BỘ LỌC TỬ HUYỆT (DEATH DIGITS FILTER)
// Vừa đếm chữ số, vừa bắt lỗi. Trả về -1 nếu phát hiện số chắn/số 5
int count_and_filter(int n) {
    int cnt=0;
    int is_that_multi=(n>9); //Check xem phải số từ 2 chữ số trở lên 
    while(n>0) {
        int digit=n%10;
        // Nếu số có nhiều chữ số, mà chứa 0, 2, 4, 6, 8, hoặc 5 -> Chắc chắn chết!
        if(is_that_multi && (digit%2==0 || digit==5) ) return -1;
        cnt++;
        n/=10;
    }
    return cnt;
}
// 3. TẠO LƯỠI DAO CẮT SỐ (10^k)
int power_of_10(int exp) {
    int res=1;
    while(exp--) res*=10;
    return res;
}
// 4. THUẬT TOÁN XOAY VÒNG
int circle_check(int n) {
    // 1. Chạy qua trạm kiểm tra tử huyệt trước
    int digit=count_and_filter(n);
    if(digit==-1) return 0;
    // 2. Kiểm tra  gốc
    if(!prime(n)) return 0;
    int power=power_of_10(digit-1);
    int tmp=n;
    // 3. Tiến hành xoay (digit - 1) lần
    for(int i=1;i<digit;i++) {
        int first=tmp/power; //Cắt lấy đầu
        int mid=tmp%power; //Cắt lấy 
        tmp=mid*10+first; // Bơm thân lên, nối đầu ra sau
        // Chết ở bất kỳ vòng xoay nào cũng bị loại
        if(!prime(tmp)) return 0;
    }
    return 1;
}

int main () {
    int t;scanf("%d",&t);
    while(t--) {
        int n;scanf("%d",&n);
        printf("%d ",circle_check(n)?1:0);
    }
    return 0;
}



*1.Gác cổng count_and_filter
->Dùng toán tử logic gộp để vứt bỏ các số chứa chữ số 0, 2, 4, 6, 8, 5.
=>Giảm gần 90% số lần phải gọi hàm prime() và các vòng lặp xoay số vô ích đối với các số lớn. Tốc độ diệt số sai là O(K).

*2.Hàm prime(n)
->Lệnh i * i <= n và bước nhảy kép i += 2.
=>Cắt giảm 50% vòng lặp so với i++. Khử hoàn toàn thư viện <math.h>, chỉ dùng phép nhân số nguyên siêu nhanh của CPU.

*3.Thuật toán xoay circle_check
->Dùng hệ số power cố định (tmp % power).
=>Không cần dùng tới Chuỗi (String) hay Mảng (Array). Không bị hao hụt số 0 ảo ở giữa. Tính toán chỉ bằng phép dịch bit và toán tử cơ bản.

*4.Single Responsibility
->Tách 4 hàm rõ ràng.Không bị rối rắm như bản Stack all (Spaghetti code). 
=>Dễ dàng bắt lỗi và bảo trì, trình biên dịch (Compiler) của C sẽ tự động Inlining (gộp mã máy) các hàm này để tăng tốc.

*/

#include <stdio.h>
int prime(int n) {
    if(n<2 || (n>2 && n%2==0)) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}

int count_and_filter(int n) {
    int cnt=0,is_that_multi=(n>9);
    while(n>0) {
        int digit=n%10;
        if(is_that_multi && (digit%2==0 || digit==5)) return -1;
        cnt++;
        n/=10;
    }
    return cnt;
}

int power_of_ten(int exp) {
    int res=1;
    while(exp--) res*=10;
    return res;
}

int circle_check(int n) {
    int digit_number=count_and_filter(n);
    if(digit_number==-1) return 0;
    if(!prime(n)) return 0;
    int tmp=n,power=power_of_ten(digit_number-1);
    for(int i=1;i<digit_number;i++) {
        int first=tmp/power,mid=tmp%power;
        tmp=mid*10+first;
        if(!prime(tmp)) return 0;
    }
    return 1;
}

int main () {
    int t;scanf("%d",&t);
    while(t--) {
        int n;scanf("%d",&n);
        printf("%d ",circle_check(n)?1:0);
    }
    return 0;
}