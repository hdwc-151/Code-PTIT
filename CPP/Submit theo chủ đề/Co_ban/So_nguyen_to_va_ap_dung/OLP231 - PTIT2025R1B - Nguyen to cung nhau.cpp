#include <bits/stdc++.h>
using namespace std;
const int MAX=1e5;
int Data[MAX+1];
bool valid[MAX+1];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i=0;i<=MAX;i++) {
        Data[i]=i;
        valid[i]=true;
    }
    for(int i=2;i*i<=MAX;i++) if(Data[i]==i) for(int j=i*i;j<=MAX;j+=i) if(Data[j]==j) Data[j]=i;
    int n,m; cin >> n >> m;
    for(int i=0;i<n;i++) {
        int x; 
        cin >> x;
        while(x>1) {
            int p=Data[x];
            if(p<=m&&valid[p]) for(int j=p;j<=m;j+=p) valid[j]=false;
            while(x%p==0) x/=p;
        }
    }
    int count=0;
    for(int k=1;k<=m;k++) if(valid[k]) count++;
    cout << count << "\n";
    bool check=true;
    for(int k=1;k<=m;k++)
        if(valid[k]) {
            if(check) {
                cout << k;
                check=false;
            }
            else cout << " " << k;
        }
    cout << "\n";
    return 0;
}