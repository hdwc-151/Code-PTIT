#include <bits/stdc++.h>
using namespace std;
int stt=1;
class NhanVien {
private:
    string id,name,gender,born,address,tax,date;
public:
    friend istream &operator >> (istream &is,NhanVien &a) {
        cin.ignore();
        getline(cin,a.name);
        is >> a.gender >> a.born;
        is.ignore();
        getline(is,a.address);
        is >> a.tax >> a.date;
        string s=to_string(stt++);
        while(s.length()<5) s="0"+s;
        a.id=s;
        return is;
    }
    friend ostream &operator << (ostream &os,NhanVien a) {
        os << a.id << " " << a.name << " " << a.gender << " " << a.born << " " << a.address << " " << a.tax << " " << a.date << "\n";
        return os;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    NhanVien ds[50];
    int N; cin >> N;
    for(int i=0;i<N;i++) cin >> ds[i];
    for(int i=0;i<N;i++) cout << ds[i];
	return 0;
}