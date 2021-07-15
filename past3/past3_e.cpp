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
    llong N,M,Q;cin >> N >> M >> Q;
    vector<int> dots(N);
    vector<vector<int>> sides(N,vector<int> (0));

    REP(i,M){
      int u,v;cin >> u >> v;
      u +=-1; v+=-1;
      sides[u].push_back(v);
      sides[v].push_back(u);
    }

    REP(i,N){
      int c ;cin >> c;
      dots[i] = c;
    }

    REP(i,Q){
      int q ;cin >> q;
      int x,y;
      if(q==1){
        cin >> x;x--;

        cout << dots[x] << endl;;
        for(auto t : sides[x]){
          dots[t] = dots[x];
        }


      }else{
        cin >> x >> y;x--;

        cout << dots[x] << endl;;
        dots[x] = y;
      }
    }

}
