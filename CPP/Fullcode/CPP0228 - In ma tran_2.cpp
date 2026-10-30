#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int m=4*n;
        stack<int> s;
        int count=0,up=0,down=m-1,left=0,right=m-1,limit=(m*m)/2;
        while(1) {
            for(int i=down;i>=up;i--) {
                s.push(i*m+right+1);
                count++;
            }
            right-=2;
            if(count==limit) break;
            for(int i=right+1;i>=left+1;i--) {
                s.push(up*m+i+1);
                count++;
            }
            up+=2;
            if(count==limit) break;
            for(int i=up-1;i<=down-1;i++) {
                s.push(i*m+(left+1)+1);
                count++;
            }
            left+=2;
            if(count==limit) break;
            for(int i=left;i<=right;i++) {
                s.push((down-1)*m+i+1);
                count++;
            }
            down-=2;
            if(count==limit) break;
        }
        vector<int> v;
        while(!s.empty()) {
            cout << s.top() << " ";
            v.push_back(s.top());
            s.pop();
        }
        cout << "\n";
        int max=m*m+1;
        for(int x:v) cout << max-x << " ";
        cout << "\n";
    }
    return 0;
}