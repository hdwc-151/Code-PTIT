#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int dd[10]={0};
        for(auto x:s) {
            if(x=='2') dd[2]++;
            else if(x=='3') dd[3]++;
            else if(x=='4') dd[3]++,dd[2]+=2;
            else if(x=='5') dd[5]++;
            else if(x=='6') dd[5]++,dd[3]++;
            else if(x=='7') dd[7]++;
            else if(x=='8') dd[7]++,dd[2]+=3;
            else if(x=='9') dd[7]++,dd[3]+=2,dd[2]++;
        }
        for(int i=9;i>=2;i--) for(int j=1;j<=dd[i];j++) cout << i;
        cout << "\n";
    }
    return 0;
}