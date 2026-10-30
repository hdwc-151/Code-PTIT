/* Xử lý số
#include <bits/stdc++.h>
using namespace std;
int isPalindrome(long long n) {
    long long original=n,reversed=0;
    while(n>0) {
        int last_digit=n%10;
        reversed=reversed*10+last_digit;
        n/=10;
    }
    return original==reversed;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        cout << (isPalindrome(n)?"YES":"NO") << "\n";
    }
    return 0;
}
*/

//Xử lý chuỗi
#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string s) {
    int left=0,right=s.length()-1;
    while(left<right) {
        if(s[left]!=s[right]) return 0;
        left++;
        right--;
    }
    return 1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        cout << (isPalindrome(s)?"YES":"NO") << "\n";
    }
    return 0;
}