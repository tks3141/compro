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
#define INTINF  2147483647
using namespace std;

typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<llong> LV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

vector<pair<int,vector<int>>> H;
vector<int> r;
vector<pair<int,int>> W;

int reach(int n){
    for(auto e : H[W[n].second].second){
        r[e] = 1;
    }
    return 0;
}

int main() {
	int n,m; cin >> n >> m;
    r = vector<int> (n,0);
    W = vector<pair<int,int>>();

    REP(i,n){
        int x;cin >> x;
        vector<int> a;
        H.push_back(make_pair(x,a));
        W.push_back(make_pair(x,i));
    }

    REP(i,m){
        int a,b;
        cin >> a >> b;
        H[a-1].second.push_back(b-1);
        H[b-1].second.push_back(a-1);
    }

    sort(W.begin(),W.end());

    int ans = 0;    
    REPR(i,n-1){
        if(r[W[i].second]==0){
            int isTop = 1;
            for(auto e : H[W[i].second].second){
                if(H[W[e].second].first >= H[W[i].second].first){
                    isTop = 0;break;
                }
            }
            if(isTop) ans++;
        }
        reach(i);
    }
    
    cout << ans << endl;

    return 0;
}
