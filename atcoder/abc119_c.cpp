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
	llong N,A,B,C;
	cin >> N >> A >> B >> C;
    LV take(N);
    REP(i,N){
        cin >> take[i];
    }
    llong cost = INF;
    llong ca,cb,cc,cnow;
    llong na,nb,nc;
    llong cnt =0;
    REP(a,1 << (N) ){
        REP(b,1 << (N) ){
            REP(c,1 << (N) ){
                if( (a&b) || (a&c) || (b&c) ) continue;
                cnt++;
                na = A;nb = B;nc=C;
                ca = cb = cc = -10;
                REP(i,N){
                    if( a&(1<<i) ){
                        na -= take[i]; ca+=10;
                    }
                }
                REP(i,N){
                    if( b&(1<<i) ){
                        nb -= take[i]; cb+=10;
                    } 
                }
                REP(i,N){
                    if( c&(1<<i) ){
                        nc -= take[i]; cc+=10;
                    }
                }
                if (ca<0 || cb<0 || cc <0) continue;
                ca += abs(na);
                cb += abs(nb);
                cc += abs(nc);
                cnow = ca + cb + cc;
                cost = (cnow < cost) ? cnow : cost;
            }
        }
    }
    cout << cost << endl;
    // cout << "cnt" << cnt << endl;
    // LV use_facet(N,0);
    // REP(i,N){

    // }




}
