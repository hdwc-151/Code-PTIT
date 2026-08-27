#include <stdio.h>
int multiple(int n) {
    int result=1;
    for(int i=2;i<=n/i;i++) {
        if(n%i==0) result*=i;
        while(n%i==0) n/=i;
        if(n==1) return result;
    }
    return result*n;
}
int main () {
    int t;scanf("%d",&t);
    while(t--) {
        int n;scanf("%d",&n);
        printf("%d\n",multiple(n));
    }
    return 0;
}

/*
#include <stdio.h>
int multiple(int n) {
    -CHỨNG MINH 1: Phần tử trung hòa của phép nhân
    -Trong toán học, x * 1 = x. Do kết quả là một tích, ta bắt buộc khởi tạo bằng 1.
    int result=1;

    *PHẦN 1: TRIỆT TIÊU SỐ CHẴN DUY NHẤT (2)
    if(n%2==0) {
        result*=2; 
        
        -CHỨNG MINH 2: Định lý Cơ bản của Số học
        -Mọi số nguyên > 1 đều có thể phân tích thành tích các số nguyên tố.
        -Vòng lặp này vắt kiệt toàn bộ các lũy thừa của 2 (ví dụ 4, 8, 16...).
        => Hệ quả: Biến 'n' sau vòng lặp này CHẮC CHẮN là một số lẻ.
        while(n%2==0) n/=2;
    }

    *PHẦN 2: DUYỆT CÁC SỐ LẺ (BƯỚC NHẢY 2)
    -CHỨNG MINH 3:
    -Bắt đầu từ i=3 (Số nguyên tố lẻ nhỏ nhất).
    -Điều kiện: i<=n/i . Giúp chống Overflow -> tốt hơn so với i * i <= n nếu N tiến tới 2 tỷ (INT_MAX).
    -Bước nhảy: i += 2 (Chỉ duyệt 3, 5, 7, 9...). Bỏ qua mọi số chẵn.
    for(int i=3;i<=n/i;i+=2) {
        if(n%i==0) {
            -CHỨNG MINH 4: Tại sao 'i' chắc chắn là số nguyên tố?
            -Giả sử 'i' là hợp số (VD: i = 9). Để chia hết cho 9, 'n' phải chứa thừa số 3.
            -Nhưng trước khi 'i' chạy đến 9, nó đã đi qua 3. Và vòng while() dưới đây đã vắt kiệt toàn bộ số 3 ra khỏi 'n'. 
            => 'n' hiện tại không thể chia hết cho bất kỳ hợp số nào.
            result *= i;
            -Vắt kiệt lũy thừa của 'i'
            while(n%i==0) n/=i;
        }
    }

    *PHẦN 3: XỬ LÝ PHẦN DƯ CUỐI CÙNG
    -CHỨNG MINH 5: Tính chất Cặp Ước số
    -Nếu một số 'n' có một ước nguyên tố p > sqrt(n), thì nó CHỈ CÓ THỂ có tối đa MỘT ước như vậy. (Vì nếu có 2 ước > sqrt(n), tích của chúng sẽ > n, vô lý!).
    -Do vòng lặp for ở trên chỉ duyệt đến sqrt(n), nên nếu sau khi chạy xong mà phần dư 'n' vẫn lớn hơn 1, phần dư đó CHÍNH LÀ ước nguyên tố cuối cùng bị bỏ lại.
    if(n>1) result*=n;
    return result;
}

int main() {
    int t;scanf("%d",&t)
    while (t--) {
        int n; scanf("%d",&n);
        printf("%d\n",multiple(n));
    }
    return 0;
}
*/

/*
#include <stdio.h>
int multiple(int n) {
    int result=1;
    if(n%2==0) {
        result*=2;
        while(n%2==0) n/=2;
    }
    for(int i=3;i<=n/i;i+=2) {
        if(n%i==0) {
            result*=i;
            while(n%i==0) n/=i;
        }
    }
    if(n>1) result*=n;
    return result;
}
int main() {
    int t;scanf("%d",&t);
    while (t--) {
        int n;scanf("%d",&n);
        printf("%d\n",multiple(n));
    }
    return 0;
}
*/