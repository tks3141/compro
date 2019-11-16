#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define LINF (long long)1 << 61
#define INF 1 << 31
#define MOD 10007
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

typedef vector<llong> LV;
typedef vector<int> VI;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};


using VC = vector<char>;

struct Table
{
    VI rx,ry,b,by,bx;VC c;
    vector<pair<int,int>> flags;
    vector<VI> cost;
    int n;

    Table(int n,int gy,int gx,VI y,VI x,VC c,VI by,VI bx){
        this->n = n;ry=y;rx=x;this->c=c;this->b=b;this->by=by;this->bx=bx;
        for(auto& e : cost){
            e= VI(n,INF);
        }
        for(int i = 0;i<by.size();i++){
            cost[by[i]][bx[i]]=-1;
        }
        cost[gy][gx]=0;

    }

    int Calc(){
        REP(y,n){
            REP(x,n){
                
            }
        }
    }
};



int main(){
    int N,M,B,gy,gx; cin >> N >> M >>B >>gy >>gx;
    VI ry(M),rx(M);
    VC c(M);
    REP(i,M){
        cin >> ry[i] >> rx[i] ;
        cin >> c[i];
    }

    VI bx(B),by(B);
    REP(i,B){
        cin >> by[i] >> bx[i];
    }
    Table ta = Table(N,gy,gx,ry,rx,c,by,bx);
    





    return 0;

}