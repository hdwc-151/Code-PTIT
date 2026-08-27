//Định nghĩa số nguyên tố: Số chia hết cho 1 và chính nó => 

#include <stdio.h>

int isPrime(int n) {
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) return 0;
    } return n>1;
}

/*
- Dùng boolcheck
#include <stdbool.h>
bool prime(int n) {
    for(int i=2;i<=n/i;i++) {
    -> i<=n/i tránh tràn do C tự bỏ phần thập phân và đảm bảo result luôn nằm trong giới hạn của 
        if(n%i==0) return false;
    }
    return n>1;
}

Naive và sát định nghĩa số nguyên tố nhất -> set count=0 -> cho i chạy từ 1 tới n -> count = 2 => true
int prime(int n) {
    int cnt=0;
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            cnt++; 
        Nếu chia hết thì tăng biến đếm ước số lên 1
        }
    }
Kiểm tra tổng số ước
    if (cnt == 2)
        return 1; 
    else
        return 0;
}

- O( sqrt(n) ): 
int isPrime(int n) {
    if(n<2)
        return 0;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0)
            return 0;
    }
    return 1;
}

- Solution tối ưu naive:
int prime(int n) {
    int cnt=1;
    Tự set count=1 do giải pháp này dùng logic: Mọi số tự nhiên khác không luôn chia hết cho chính nó nên tự đếm n là 1 ước luôn
    for(int i=1;i<=n/2;i++) { -> Logic: tối ưu toán học = Một số không thể có ước nguyên nào lớn hơn 1/2 chính nó (trừ chính nó)
        if(n%i==0) cnt++;
        }
    if(cnt==2) return 1;
    return 0;
}


*/

int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        if(isPrime(n)) printf("YES\n");
        else printf("NO\n");
    } 
    return 0;
}

