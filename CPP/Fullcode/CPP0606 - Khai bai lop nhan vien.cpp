#include <bits/stdc++.h>
using namespace std;
class NhanVien {
private:
    string id,name,gender,born,address,tax,date;
public:
    friend istream &operator >> (istream &is,NhanVien &a) {
        a.id="00001";
        getline(cin,a.name);
        is >> a.gender >> a.born;
        is.ignore();
        getline(is,a.address);
        is >> a.tax >> a.date;
        return is;
    }
    friend ostream &operator << (ostream &os,NhanVien a) {
        os << a.id << " " << a.name << " " << a.gender << " " << a.born << " " << a.address << " " << a.tax << " " << a.date;
        return os;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    NhanVien a;
    cin >> a;
    cout << a;
	return 0;
}