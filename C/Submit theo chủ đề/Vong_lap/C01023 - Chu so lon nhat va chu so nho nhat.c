#include <stdio.h>
int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        long long n;
        scanf("%lld",&n);
        int max=0,min=9,digit;
        while(n>0) {
            digit = n%10;
            if(digit>max)
                max=digit;
            if(digit<min)
                min=digit;
            n/=10;
        }
        printf("%d %d\n",max,min);
    }
    return 0;
}

/*
#include <stdio.h>
int main () {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		int max=0,min=9,digit=n%10; -> Sai do digit chỉ lấy số tận cùng
		while(n>0) -> Mỗi loop cần lấy từng chữ số của n để ghi đề lên min, max và so sánh
			n/=10; -> Sai do từ đầu đã lấy chữ số kế cận số tận cùng
		if(digit>max) max=digit;
		if(digit<min) min=digit;
	}
	printf("%d %d\n",max,min);
    }
    return 0;
}
*/