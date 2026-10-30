#include <bits/stdc++.h>
using namespace std;
bool finding(int a[],int l,int r,int target) {
    while(l<=r) {
        int m=(l+r)/2;
        if(a[m]==target) return 1;
        (a[m]>target)?r=m-1:l=m+1;
    }
    return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,x; cin >> n >> x;
        int a[n];
        for(auto &val:a) cin >> val;
        sort(a,a+n);
        finding(a,0,n-1,x)?cout<<"1\n":cout<<"-1\n";
    }
    return 0;
}