#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    double sum=0;
    for(int i=1;i<=n;i++) sum+=1.0/i;
    //cout << setprecision(4) << fixed << sum;
    printf("%.4f",sum);
    return 0;
}