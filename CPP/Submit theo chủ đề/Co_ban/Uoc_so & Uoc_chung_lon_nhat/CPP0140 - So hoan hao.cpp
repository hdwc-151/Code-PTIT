/* WA?
#include <bits/stdc++.h>
using namespace std;
long long pow(int x,int y) {
    long long res=1;
    for(int i=1;i<=y;i++) res*=x;
    return res;
}
vector<long long> v={6,28,496,8128,33550336,8589869056LL};
void perfectNumber() {
    long long x=pow(2,18)*(pow(2,19)-1);
    v.push_back(x);
    long long y=pow(2,30)*(pow(2,31)-1);
    v.push_back(x);
}
void testcase() {
    long long n; cin >> n;
    for(int i=0;i<v.size();i++)
        if(n==v[i]) {
            cout << "1\n";
            return;
        }
    cout << "0\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) testcase();
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
long long perfect_nums[]={
    6, 
    28, 
    496, 
    8128, 
    33550336, 
    8589869056LL, 
    137438691328LL, 
    2305843008139952128LL 
};
void testcase() {
    long long n; cin >> n;
    for(int i=0;i<8;i++) 
        if(n==perfect_nums[i]) {
            cout << "1\n";
            return;
        }
    cout << "0\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) testcase();
    return 0;
}