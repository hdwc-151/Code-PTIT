/*Naive: Standard Recursion -> Không dùng mảng luôn
#include <stdio.h>
long long fib(int n) {
    if(n==1||n==2) return 1;
    return fib(n-1)+fib(n-2);
}
int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        printf("%lld\n",fib(n));
    }
    return 0;
}
*/

/*Dynamic Solution -> Iterative: Khử đệ 
#include <stdio.h>
long long fibo(int n) {
    if(n==1||n==2) return 1; OR if(n<=2) return 1;
    long long f1=1,f2=1,f;
    for(int i=3;i<=n;i++) {
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    return f;
}

int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        printf("%lld\n",fibo(n));
    }
    return 0;
}
*/

/*Tail Recursion/Forward State -> Đệ quy đơn nhánh: Không dùng 2 nhành mà đi thẳng từ dưới lên (Có dùng call stack)
- First call -> n: Số Fibo đích cần tìm | current_step: Vị trí Fibo đang tính (tương đương biến i trong vòng lặp) | f1, f2: Hai giá trị Fibo liền trước (tương đương biến trượt)
long long f_branch(int n,int current_step,long long f1,long long f2) {
    if(n<=2) return 1;
    if(current_step==n) return f1+f2; -> Đích
    return f_branch(n,current_step+1,f2,f1+f2); -> Chỉ rẽ 1 nhánh duy nhất, đẩy trạng thái tiến lên phía trước
    - current_step + 1: Bước hiện tại tăng 1 | f2: Số trước đó trượt lên trên | f1 + f2: Số hiện tại trượt lên thành tổng
}
- Wrapper function: Hàm bọc nhằm giấu tham số khởi tạo
long long f_tail(int n) {
    if(n<=2) return 1; -> Tính từ vị trí thứ 3
    return f_branch(n,3,1,1)
}
int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        printf("%lld\n",f_tail(n));
    }
    return 0;
}
*/

/*Top-down -> Memoization: Check xem tính chưa, nếu chưa tính thì rẽ nhánh đệ quy và tính xong thì lưu vào vector
#include <stdio.h>
long long memo[93];
long long fibo(int n) {
    - Phần đầy đủ là: if(n<=1) return n; -> if(n==0) return 0; -> if(n==1) return 0;
    if(n<=2) return 1; -> Đáy của đệ quy để hàm không bị lặp vô tận
    - Kiểm tra xem đã từng tính số fibo này chưa -> Memoization Technique: Trước khi tính toán, check trong mảng lưu trữ xem có số này chưa => Nếu ô thứ n (index) khác 0 -> Số đó đã được tính từ trước
    if(memo[n]!=0) return memo[n];
    - Trong trường hợp chưa tính thì tính và lưu lại vào mảng memo[n]
    memo[n]=fibo(n-1)+fibo(n-2);
    -> Nếu chưa tính => memo[n]=0 => Tiến hành đệ quy rẽ 2 nhánh để tính -> Tính xong lưu vào mảng
    return memo[n];
}
int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        printf("%lld\n",fibo(n));
    }
    return 0;
}
*/

/*Bottom-up -> Tabulation: Không  đệ quy, không cần mảng toàn cục => Tạo 1 bảng ngay trong hàm và điền từ trái sang phải = loop
#include <stdio.h>
long long fibo(int n) {
    if(n<=2) return 1;
    long long dp[93];
    - Khai báo bảng -> Mảng này sẽ bị hủy khi hàm kết thúc -> Giải phóng bộ nhớ
    dp[1]=1,dp[2]=1;
    for(int i=3;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
    - Số hiện tại = Tổng 2 số ở vị trí trước đó
    return dp[n];
}
int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        printf("%lld\n",fibo(n));
    }
    return 0;
}
*/

/*Prefix sum
#include <stdio.h>
long long s[93];
long long fib_prefixsum(int n) {
    if(n<=2) return 1;
    s[1]=1,s[2]=1;
    long long fn=0;
    for(int i=3;i<=n;i++) {
        fn=s[i-2]+1; -> Tính F(i)
        s[i]=s[i-1]+fn; -> Cập nhật tổng cộng dồn
    }
    return fn;
}
int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        printf("%lld\n",fib_prefixsum(n));
    }
    return 0;
}
*/

/*Lookup Table -> Mảng tiền tính toán: Precompute 92 số Fibo đầu tiên sau đó lưu vào mảng => Chỉ cần truy xuất do giới hạn số fibo ở n<=92 thì < 64-bit
#include <stdio.h>
long long f[93];

void precompute() {
    f[1]=1,f[2]=1;
    for(int i=3;i<93;i++) f[i]=f[i-1]+f[i-2];
}

int main() {
    precompute();
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        printf("%lld\n",f[n]);
    }
    return 0;
}
-> Solution cho N=10^5 */

/*Matrix Exponentiation -> Nhân ma trận: 
#include <stdio.h>
void multiply(long long A[2][2],long long B[2][2]) {
    long long x=A[0][0]*B[0][0]+A[0][1]*B[1][0];
    long long y=A[0][0]*B[0][1]+A[0][1]*B[1][1];
    long long z=A[1][0]*B[0][0]+A[1][1]*B[1][0];
    long long w=A[1][0]*B[0][1]+A[1][1]*B[1][1];
    
    A[0][0]=x;A[0][1]=y;
    A[1][0]=z;A[1][1]=w;
}

// Hàm chia để trị: Lũy thừa ma trận nhị phân
void power(long long M[2][2],int n) {
    if(n==0||n==1) return;
    // Ma trận cơ sở M^1
    long long base[2][2]={{1,1},{1, 0}};
    // Đệ quy chia đôi số mũ
    power(M,n/2);
    multiply(M,M); //M=M*M (tương đương M^2)
    // Nếu n lẻ, nhân thêm một lần ma trận cơ sở
    if(n%2!=0) {
        multiply(M,base);
    }
}

long long fiboMatrix(int n) {
    if(n==0) return 0;
    long long M[2][2]={{1,1},{1,0}};
    // Tính M^(n-1)
    power(M,n-1);
    // Kết quả nằm ở góc trên bên trái của ma trận
    return M[0][0]; 
}

void solve() {
    int n; scanf("%d",&n);
    printf("%lld\n",fiboMatrix(n));
}

int main() {
    int t; scanf("%d",&t); 
    while (t--) solve();
    return 0;
}
Idea: Binary Exponentiation*/

/*Fast Doubling -> CP solution
Từ ma trận, rút gọn ra 2 phương trình đệ quy để tính nhảy cóc (nhân đôi vị trí index):
- F{2k} = F{k}.(2F.{k+1} - F{k}) và F{2k+1} = F{k+1}^2 + F{k}^2

#include <stdio.h>
- Hàm đệ quy, nhận vị trí n và result[] gồm 2 phần tử. Dùng mảng để chừa và trả về cùng lúc F(n) và F(n+1)
void solve(int n,long long result[]) {
    if(n==0) {
        result[0]=0,result[1]=1;
        return; -> Cắt nhánh, quay lui lên trên
    }
    long long half[2]; -> Khai báo mảng gồm 2 phần tử để nhận kết quả từ bài toán 
    solve(n/2,half); -> Gọi đệ quy n/2. Với half chứa F(k) và F(k+1) cùng k=n/2
    long long a=half[0],b=half[1],c=a*(2*b-a),d=a*a+b*b;
    - a là F(k), b là F(k+1), c là F(2k), d là F(2k+1)
    (n%2==0) ? (result[0]=c,result[1]=d) : (result[0]=d,result[1]=c+d);
    - Tùy n chẵn hay lẻ để chia trường hợp: n=2k => F(2k)=c và F(2k+1)=d || n=2k+1 => F(2k)=d và F(2k+1)=c+
}

int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        long long result[2];
        solve(n,result);
        printf("%lld\n",result[0]);
    }
    return 0;
}
*/