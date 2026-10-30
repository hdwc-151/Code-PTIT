#include <bits/stdc++.h>
using namespace std;
class SinhVien {
private:
    string msv,name,classs,born;
    float gpa;
public:
    SinhVien() {
        msv="";
        name="";
        classs="";
        born="";
        gpa=0.0;
    }
    void nhap() {
        msv="B20DCCN001";
        getline(cin,name);
        cin >> classs >> born >> gpa;
        if(born[2]!='/') born.insert(0,"0");
        if(born[5]!='/') born.insert(3,"0");
    }
    void xuat() {
        cout << msv << " " << name << " " << classs << " " << born << " ";
        cout << fixed << setprecision(2) << gpa << "\n";
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}