#include <bits/stdc++.h>
using namespace std;
class PhoneNumber {
private:
    char areaCode[4],exchange[4],line[5];
public:
    friend istream &operator >> (istream &input,PhoneNumber &num) {
        input.ignore();   
        input >> setw(4) >> num.areaCode;
        input.ignore(2);
        input >> setw(4) >> num.exchange;
        input.ignore();
        input >> setw(5) >> num.line;
        return input;
    }

    friend ostream &operator << (ostream &output,PhoneNumber &num) {
        output << "(" << num.areaCode << ") " << num.exchange << "-" << num.line;
        return output;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    PhoneNumber phone;
    cout << "Nhap so dien thoai theo dinh dang (123) 456-7890:\n";
    cin >> phone;
    cout << "So dien thoai da nhap: " << phone << "\n";
    return 0;
}