#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF (long long)1 << 61
#define MOD 10007
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

typedef vector<llong> LV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main(){
    int N,M; cin >> N >> M;
    LV dp((1<<N),-1);LV a(M),bit(M);
    REP(i,M){
        int b; cin >> a[i] >> b;
        int c = 0;
        REP(j,b){
            int k;cin >> k;
            c = c | (1 << (k-1)); 
        }
        bit[i]=c;
    }
    dp[0]=0;
    REP(i,M){
        REP(j,1<<N){
            int to = j | bit[i];
            if(dp[j]>-1){
                if((a[i]+dp[j] < dp[to]) || dp[to]<0){
                    dp[to]=a[i]+dp[j];
                }
            }
        }
    }
    int ansj = (1<<N)-1;
    llong ans = (dp[ansj]<INF) ? dp[ansj] : -1;
    cout << ans << endl;


    return 0;

}