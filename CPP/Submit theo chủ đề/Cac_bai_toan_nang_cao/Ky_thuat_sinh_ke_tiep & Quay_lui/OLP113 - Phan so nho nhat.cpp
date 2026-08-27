#include <bits/stdc++.h>
using namespace std;
typedef __int128 I;
int np,nq,fp[10],fq[10],nxt[22][10];
char sp[22],sq[22];
long long P,Q;
I bestA,bestB;
bool found;
void pr(I n) {
    if(!n) {
        putchar('0');
        return;
    }
    char b[24]; 
    int k=0;
    while(n) {
        b[k++]='0'+(int)(n%10);
        n/=10;
    }
    while(k--) putchar(b[k]);
}
void dfs(int i,I a,int la,int cp[10]) {
    if(i==np) {
        if(a==0||(found&&a>=bestA)) return;
        int lb=nq-(np-la);
        if(lb<=0) return;
        I bf=a*Q;
        if(bf%P) return;
        I b=bf/P;
        int digs[22],nd=0; {
            I t=b;
            do {
                digs[nd++]=(int)(t%10);
                t/=10;
            } while(t); 
        }
        if(nd>lb) return;
        int cb[10]={0},pos=0;
        for(int k=0;k<lb-nd;k++) {
            pos=nxt[pos][0];
            if(pos>=nq) return;
            cb[0]++;
            pos++;
        }
        for(int k=nd-1;k>=0;k--) {
            int d=digs[k];
            pos=nxt[pos][d];
            if(pos>=nq) return;
            cb[d]++;
            pos++;
        }
        for(int d=0;d<10;d++) if (fp[d]-cp[d]!=fq[d]-cb[d]) return;
        found=true;
        bestA=a;
        bestB=b;
        return;
    }
    dfs(i+1,a,la,cp);
    int d=sp[i]-'0';
    cp[d]++;
    dfs(i+1,a*10+d,la+1,cp);
    cp[d]--;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        cin >> P >> Q;
        string sP=to_string(P);
        string sQ=to_string(Q);
        np=sP.length();
        nq=sQ.length();
        sP.copy(sp,np);
        sp[np]='\0';
        sQ.copy(sq,nq);
        sq[nq]='\0';
        memset(fp,0,sizeof fp);
        memset(fq,0,sizeof fq);
        for(int i=0;i<np;i++) fp[sp[i]-'0']++;
        for(int i=0;i<nq;i++) fq[sq[i]-'0']++;
        for(int d=0;d<10;d++) nxt[nq][d]=nq;
        for(int i=nq-1;i>=0;i--) for(int d=0;d<10;d++) nxt[i][d]=(sq[i]-'0'==d)?i:nxt[i+1][d];
        found=false;
        int cp[10]={0};
        dfs(0,0,0,cp);
        pr(bestA);
        putchar(' ');
        pr(bestB);
        putchar('\n');
    }
    return 0;
}