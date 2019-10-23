#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
#define MOD 10007
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};



int main(){
    int N,M,ii;
    cin >> N>>M;
    if(M==0){ cout << 1 <<endl; return 0;}
    int x[M]={0},y[M]={0},ship[N]={0};
    REP(i,M){
        cin >> x[i] >> y[i];
        ship[x[i]] |= (1 << y[i]);
        ship[y[i]] |= (1 << x[i]);
    }
    REP(i,N){
        ship[i] |=(1<<i);
        //cout << ship[i]<<endl;
    }
    int t=pow(2,N)-1;
    int ans=0;
    int c=0;
    REP(i,pow(2,N)){
        int tes=i;
        c=0;
        REP(k,N){
            if(i>>k & 0b01){
                tes &=ship[k];
                c++;
            }
        }
        if(tes==i){
            ans=max(c,ans);
        }
    }
    cout << ans <<endl;

    return 0;

}