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
#define MOD 10007
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<llong> LV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};


// bool gousei(llong *x,llong *y){
//     if(*x<*y){
//         *y=x+y
//     }
// }

int main() {
	llong N,M;
	cin >> N >> M;
    LV koma(M);
    REP(i,M){
        cin >> koma[i];
    }
    llong cost = 0;
    LV L(M-1);
    sort(koma.begin(),koma.end(),greater<llong>());
    REP(i,M-1){
        L[i]=koma[i]-koma[i+1] ;
    }
    sort(L.begin(),L.end(),greater<llong>());
    if(N<M){
        REP(i,N-1){
            cost += L[i];
        }
        cost = koma[0] - koma[M-1]  - cost;
    }
    


    cout << cost << endl;





}
