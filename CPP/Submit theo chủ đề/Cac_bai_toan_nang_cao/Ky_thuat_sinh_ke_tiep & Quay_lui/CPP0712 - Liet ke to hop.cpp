#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        vector<int> a(k+1);
        for(int i=1;i<=k;i++) a[i]=i;
        while(true) {
            for(int i=1;i<=k;i++) cout << a[i];
            cout << " ";
            int i=k;
            while(i>0&&a[i]==n-k+i) i--;
            if(i==0) break;
            a[i]++;
            for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
        }
        cout << "\n";
    }
    return 0;
}