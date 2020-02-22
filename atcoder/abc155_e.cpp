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
	string S;cin >> S;
    int N = S.length();
    int inf = 1<<30;
    vector<vector<int>> dp(N+2,vector<int> (11,inf));
    reverse(S.begin(),S.end());
    dp[0][S[0]-'0']=0;
    REP(i,N+1){
        REP(j,11){
            if(dp[i][j]!=inf){
                // cout << "a:" << i << j << endl;
                int n = (i+1<N) ? S[i+1]-'0':0;
                // cout << n << endl;
                if(j==10){
                    // 繰り上がり，０
                    dp[i+1][n+1]=min(dp[i+1][n+1],dp[i][j]);
                }else{
                    // そのまま
                    dp[i+1][n]=min(dp[i+1][n],dp[i][j]+j);
                    // 繰り上がり
                    dp[i+1][n+1]=min(dp[i+1][n+1],dp[i][j]+10-j);                    
                }
            }
        }
    }
    int ans = min( dp[N][0], dp[N+1][0]);
    cout << ans << endl;
    return 0;
}
