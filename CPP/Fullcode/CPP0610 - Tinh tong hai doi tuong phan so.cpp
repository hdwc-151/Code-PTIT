#include <bits/stdc++.h>
using namespace std;
class PhanSo {
private:
    long long tu,mau;
public:
    PhanSo(long long t=0,long long m=1) {
        tu=t;
        mau=m;
    }
    void rutgon() {
        long long g=__gcd(tu,mau);
        tu/=g;
        mau/=g;
    }
    friend istream &operator >> (istream &is,PhanSo &A) {
        is >> A.tu >> A.mau;
        return is;
    }
    friend ostream &operator << (ostream &os,PhanSo A) {
        os << A.tu << "/" << A.mau;
        return os;
    }
    PhanSo operator+(PhanSo B) {
        PhanSo A;
        A.tu=tu*B.mau+B.tu*mau;
        A.mau=mau*B.mau;
        A.rutgon();
        return A;
    }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}