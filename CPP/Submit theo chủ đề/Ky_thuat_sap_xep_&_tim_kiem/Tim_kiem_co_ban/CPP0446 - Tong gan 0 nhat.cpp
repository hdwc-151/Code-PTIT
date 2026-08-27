/* WA code
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int res=1e7;
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++) {
                int sum=a[i]+a[j];
                if(abs(sum)<abs(res)) res=sum;
                else if(abs(a[i]+a[j])<abs(res)) res=sum;
            }
        cout << res << "\n";
    }
    return 0;
}
*/

//Two pointers
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &x:a) cin >> x;
        sort(a.begin(),a.end());
        int l=0,r=n-1,res=1e7;
        while(l<r) {
            int sum=a[l]+a[r];
            if(abs(sum)<abs(res)) res=sum;
            else if(abs(sum)==abs(res)&&sum>res) res=sum;
            if(sum<0) l++;
            else if(sum>0) r--;
            else break;
        }
        cout << res << "\n";
    }
    return 0;
}