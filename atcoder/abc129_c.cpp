#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999999
#define MOD 1000000007
 
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<llong> LV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main() {
	llong N,M;
    cin >>N >> M ;

    int a;
    vector<int> b(N,1);
    b[N-1]=0;
    REP(i,M){
        cin >> a;
        b[a-1]-=10;
        if(a>1) b[a-2]-=1;
        if(a<N) b[a] -= 1;
    }
    llong ans=1;
    LV dp(N+1);
    dp[0]=1;dp[1]=2;
    FOR(i,2,N+1){
        dp[i]=(dp[i-1]+dp[i-2]) % MOD;
    }
    int t=0;
    REP(i,N){
        if(b[i]<-9){
            cout << 0 << endl;
            return 0;
        }else if(b[i]==1){
            t++;
        }else{
            ans=ans*dp[t] % MOD; 
            t=0;
        }
    }
    cout << ans << endl;
    return 0;

}


// 00 : 1

// 010 : 2

// 0110:3

// 01110:5

// 011110:8
// 020110
// 020200
// 020120
// 011--- 3
// 0120-- 2


// 0n0 = 01(n-1)0 + 020(n-2)0
// an = a(n-1) + a(n-2)

