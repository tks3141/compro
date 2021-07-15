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
    int N,M,Q;cin >> N >> M >> Q;
    vector<int> prob(M,0);
    vector<vector<int>> pass(N,vector<int> (M,0)); 
    REP(i,Q){
        int q,n,m;cin >> q;
        if(q==1){
            cin >> n;
            n -= 1;
            int score = 0;
            REP(p,M){
                score += (N - prob[p]) * pass[n][p];
            }
            cout << score << endl;
        }else{
            cin >> n >> m;
            n-=1;m-=1;
            pass[n][m]=1;
            prob[m]+=1;
        }
    }
}
