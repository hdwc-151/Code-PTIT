#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream input("DATA.in");
    if(!input.is_open()) return 0;
    long long ans=0;
    string s;
    while(input >> s) {
        bool is_valid=true;
        bool is_negative=false;
        int start=0;
        if(s[0]=='-') {
            is_negative=true;
            start=1;
        }
        else if(s[0]=='+') start=1;
        if(start==s.length()) continue;
        long long num=0;
        for(int i=start;i<s.length();i++) {
            if(s[i]<'0'||s[i]>'9') {
                is_valid=false;
                break;
            }
            num=num*10+(s[i]-'0');
            if(num>2147483648LL) {
                is_valid=false;
                break;
            }
        }
        if(is_valid) {
            if(is_negative) num=-num;
            if(num>=INT_MIN&&num<=INT_MAX) ans+=num;
        }
    }
    cout << ans << "\n";
    input.close();
    return 0;
}