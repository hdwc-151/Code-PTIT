/*Dùng stable sort
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,x; cin >> n >> x;
        vector<int> a(n);
        for(int &val:a) cin >> val;
        stable_sort(a.begin(),a.end(),[x](int val1,int val2) {
            return abs(val1-x)<abs(val2-x);
        });
        for(int val:a) cout << val << " ";
        cout << "\n";
    }
    return 0;
}
*/

//Naive
#include <bits/stdc++.h>
using namespace std;
const int MAX=1e5+5;
int n,x;
int a[MAX],pos[MAX];
bool cmp(int i,int j) {
    if(abs(a[i]-x)!=abs(a[j]-x)) return abs(a[i]-x)<abs(a[j]-x);
    return i<j;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        cin >> n >> x;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            pos[i]=i;
        }
        sort(pos,pos+n,cmp);
        for(int i=0;i<n;i++) cout << a[pos[i]] << " ";
        cout << "\n";
    }
    return 0;
}