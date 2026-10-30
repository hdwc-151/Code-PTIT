#include <bits/stdc++.h>
using namespace std;
const int MOD=10007;
const int MAX_STATE=69984; 
int small_primes[8]={2,3,5,7,11,13,17,19};
int limits[8]={9,6,4,4,3,3,3,3};
int mult_factor[8];
int8_t dec_state[MAX_STATE][8];
struct Element {
    int pw[8];
    int rest;
    bool operator<(const Element &other) const {
        return rest<other.rest;
    }
};
int dp0[MAX_STATE],dp1[MAX_STATE];
bool in_active0[MAX_STATE],in_active1[MAX_STATE];
vector<int> active0,active1;
void init_compression() {
    mult_factor[0]=1;
    for(int i=1;i<8;i++) mult_factor[i]=mult_factor[i-1]*limits[i-1];
    for(int s=0;s<MAX_STATE;s++) {
        int temp=s;
        for(int i=0;i<8;i++) {
            dec_state[s][i]=temp%limits[i];
            temp/=limits[i];
        }
    }
}
void solve(int testcase) {
    int n; cin >> n;
    vector<Element> a(n);
    for(int i=0;i<n;i++) {
        int val; cin >> val;
        a[i].rest=val;
        for(int j=0;j<8;j++) {
            a[i].pw[j]=0;
            while(a[i].rest%small_primes[j]==0) {
                a[i].pw[j]++;
                a[i].rest/=small_primes[j];
            }
        }
    }
    sort(a.begin(),a.end());
    for(int s:active0) { 
        dp0[s]=0; 
        in_active0[s]=false; 
    }
    for(int s:active1) {
        dp1[s]=0;
        in_active1[s]=false;
    }
    active0.clear(); 
    active1.clear();
    dp0[0]=1;
    active0.push_back(0);
    in_active0[0]=true;
    for(int i=0;i<n;i++) {
        if(i>0&&a[i].rest!=a[i-1].rest) {
            for(int s:active1) {
                int ways=(dp1[s]*a[i-1].rest)%MOD;
                if(ways>0) {
                    if (!in_active0[s]) {
                        active0.push_back(s);
                        in_active0[s]=true;
                    }
                    dp0[s]=(dp0[s]+ways)%MOD;
                }
                dp1[s]=0;
                in_active1[s]=false;
            }
            active1.clear();
        }
        vector<pair<int,int>> updates0,updates1;
        for(int s:active0) {
            int ns=0;
            for(int j=0;j<8;j++) ns+=max((int)dec_state[s][j],a[i].pw[j])*mult_factor[j];
            if(a[i].rest>1) updates1.push_back({ns,dp0[s]});
            else updates0.push_back({ns,dp0[s]});
        }
        for(int s:active1) {
            int ns=0;
            for(int j=0;j<8;j++) ns+=max((int)dec_state[s][j],a[i].pw[j])*mult_factor[j];
            updates1.push_back({ns,dp1[s]});
        }
        for (auto &p:updates0) {
            if(!in_active0[p.first]) {
                active0.push_back(p.first);
                in_active0[p.first]=true;
            }
            dp0[p.first]=(dp0[p.first]+p.second)%MOD;
        }
        for (auto &p:updates1) {
            if (!in_active1[p.first]) {
                active1.push_back(p.first);
                in_active1[p.first]=true;
            }
            dp1[p.first]=(dp1[p.first]+p.second)%MOD;
        }
    }
    if(n>0&&a[n-1].rest>1) {
        for(int s:active1) {
            int ways=(dp1[s]*a[n-1].rest)%MOD;
            if(ways>0) {
                if(!in_active0[s]) {
                    active0.push_back(s);
                    in_active0[s]=true;
                }
                dp0[s]=(dp0[s]+ways)%MOD;
            }
        }
    }
    long long ans=0;
    for(int s:active0) {
        long long val=1;
        for(int j=0;j<8;j++) {
            for(int c=0;c<dec_state[s][j];c++) {
                val=(val*small_primes[j])%MOD;
            }
        }
        ans=(ans+val*dp0[s])%MOD;
    }
    ans=(ans-1+MOD)%MOD;
    cout << "Case " << testcase << ": " << ans << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init_compression();
    int t; cin >> t;
    for(int i=1;i<=t;i++) solve(i);
    return 0;
}