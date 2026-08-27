#include <bits/stdc++.h>
using namespace std;
string chuanhoa(string str) {
    string s,res="";
    stringstream ss(str);
    while(ss >> s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s[0]=toupper(s[0]);
        res+=s+" ";
    }
    res.pop_back();
    return res;
}
class SinhVien {
private:
    string msv,name,classs,born;
    float gpa;
public:
    SinhVien() {
        msv="B20DCCN001";
        name="";
        classs="";
        born="";
        gpa=0.0;
    }
    friend istream &operator >> (istream &is,SinhVien &a) {
        getline(is,a.name);
        is >> a.classs >> a.born >> a.gpa;
        a.name=chuanhoa(a.name);
        if(a.born[2]!='/') a.born.insert(0,"0");
        if(a.born[5]!='/') a.born.insert(3,"0");
        return is;
    }
    friend ostream &operator << (ostream &os,SinhVien a) {
        os << a.msv << " " << a.name << " " << a.classs << " " << a.born << " ";
        os << fixed << setprecision(2) << a.gpa << "\n";
        return os;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}