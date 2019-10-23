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
    int N,M;
    cin >> N >> M;
    vector<LP> stores(N);
    llong A,B;
    REP(i,N){
        cin >> A >> B;
        stores[i]=make_pair(A,B);
    }
    sort(stores.begin(),stores.end());
    llong nokori=M;
    llong ans=0;
    REP(i,N){
        llong get_M = min(nokori,stores[i].second);
        ans +=get_M*stores[i].first;
        nokori-= get_M;
        if(nokori == 0) break;
    }
    cout << ans <<endl;

    return 0;
}