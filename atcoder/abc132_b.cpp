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
	llong ans=0;
    llong n,d;cin >> n>>d;
    vector<vector<double>> V(n,vector<double>(d));
    REP(i,n){
        REP(j,d){
            cin >> V[i][j];
        }
    }

    REP(i,n-1){
        FOR(j,i+1,n){
            double dd =0;
            REP(k,d){
                dd +=pow((V[i][k] - V[j][k]),2);
            }
            dd = sqrt(dd);
            if(dd== (int(dd))) {ans++;}
        }
    }




    cout << ans << endl;



    return 0;
    




}
