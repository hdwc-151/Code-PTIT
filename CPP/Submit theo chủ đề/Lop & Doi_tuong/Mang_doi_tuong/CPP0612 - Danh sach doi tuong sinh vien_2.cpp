#include <bits/stdc++.h>
using namespace std;
int stt=1;
class SinhVien {
private:
    string msv,name,classs,born;
    float gpa;
public:
    friend istream &operator >> (istream &is,SinhVien &a) {
        is.ignore();
        getline(is,a.name);
        is >> a.classs >> a.born >> a.gpa;
        //add
        string str="",temp;
        stringstream ss(a.name);
        while(ss >> temp) {
            transform(temp.begin(),temp.end(),temp.begin(),::tolower);
            temp[0]=toupper(temp[0]);
            str+=temp+" ";
        }
        str.pop_back();
        a.name=str;
        string s=to_string(stt++);
        while(s.length()<3) s='0'+s;
        a.msv="B20DCCN"+s;
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
    SinhVien ds[50];
    int N; cin >> N;
    for(int i=0;i<N;i++) cin >> ds[i];
    for(int i=0;i<N;i++) cout << ds[i];
    return 0;
}