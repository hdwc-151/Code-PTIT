/* Vector => convienent
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int x;
    vector<int> v;
    map<int,int> mp;
    while(cin >> x) {
        v.push_back(x);
        mp[x]++;
    }
    for(int i=0;i<v.size();i++)
        if(mp[v[i]]!=0) {
            cout << v[i] << " " << mp[v[i]] << "\n";
            mp[v[i]]=0;
        }
    return 0;
}
*/
//Chuẩn yêu cầu đề
#include <bits/stdc++.h>
using namespace std;
const int MAX=1e4;
struct LIST {
    int n;
    int nodes[MAX];
};
void ThongKe(LIST ds) {
    map<int,int> mp;
    for(int i=0;i<ds.n;i++) mp[ds.nodes[i]]++;
    for(int i=0;i<ds.n;i++)
        if(mp[ds.nodes[i]]!=0) {
            cout << ds.nodes[i] << " " << mp[ds.nodes[i]] << "\n";
            mp[ds.nodes[i]]=0;
        }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    LIST ds;
    ds.n=0;
    int x;
    while(cin >> x) ds.nodes[ds.n++]=x;
    ThongKe(ds);
    return 0;
}