#include <stdio.h>
int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        for(int i=2;i*i<=n;i++) {
            while(n%i==0) {
                n/=i;
                printf("%d ",i);
            }
        }
        if(n>1) printf("%d",n);
        printf("\n");
    }
    return 0;
}
//Ver phân tích thô <-> liệt kê tất cả thừa số nguyên tố

/*Ver gom nhóm số mũ & thừa số:
#include <stdio.h>
void primeFactorization(long long n) {
    - Bước 1 & 2: Cho i chạy từ 2 đến căn bậc hai của n
    for(long long i=2;i*i<=n;i++) {
    - Nếu tìm thấy một số chia hết
        if (n % i == 0) {
            int count = 0; -> Biến đếm số mũ
            - Gom thừa số i 
            while (n % i == 0) {
                count++;
                n /= i; -> Cập nhật lại n
            }
            - In ra thừa số và số mũ
            printf("%lld^%d",i,count);
            - Nếu n vẫn còn lớn hơn 1 thì in thêm dấu nhân để chờ in số tiếp theo
            if (n > 1) {
                printf(" * ");
            }
        }
    }
    
    - Bước 3: Xử lý
    - Nếu gom xong hết rồi mà n vẫn > 1, => thì phần n còn sót lại này CHÍNH LÀ thừa số nguyên tố lớn nhất.
    if (n > 1) {
        printf("%lld^1", n);
    }
    printf("\n");
}

int main() {
    long long n;
    
    printf("Nhap vao so can phan tich (N > 1): ");
    if (scanf("%lld", &n) == 1 && n > 1) {
        printf("%lld = ", n);
        primeFactorization(n);
    } else {
        printf("Vui long nhap mot so nguyen hop le lon hon 1!\n");
    }

    return 0;
}
*/

/*Ver chặn dấu "x" ở tận :
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++) {
        while(n%i==0) {
            n/=i;
            printf("%d",i); 
            if (n!=1)
                printf("x");
        }
    }
    if (n>1) printf("%d",n);
    return 0;
}
*/