#include <bits/stdc++.h>
using namespace std;
class SinhVien {
public:
    string msv,name,classs,email;
    friend istream &operator >> (istream &is,SinhVien &a) {
        is >> a.msv;
        is >> ws;
        getline(is,a.name);
        is >> a.classs >> a.email;
        return is;
    }
    friend ostream &operator << (ostream &os,SinhVien a) {
        os << a.msv << " " << a.name << " " << a.classs << " " << a.email << "\n";
        return os;
    }
};
bool cmp(SinhVien a,SinhVien b) {
    return a.msv<b.msv;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    SinhVien a[1000];
    int N=0;
    while(cin >> a[N]) N++;
    sort(a,a+N,cmp);
    for(int i=0;i<N;i++) cout << a[i];
    return 0;
}