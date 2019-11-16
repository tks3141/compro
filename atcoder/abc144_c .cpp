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
	llong n;cin >> n;
    LV y(n+1);
    REP(i,n) cin >> y[i];
    y[n]=y[0];


    vector<vector<llong>> V(n+1,vector<llong>(2,0));
    V[0][0]=2;V[0][1]=0;
    FOR(i,1,n+1){
        V[i][0]=   0   - V[i-1][0];
        V[i][1]=2*y[i] - V[i-1][1];
    }
    llong a=V[0][0],b=V[0][1],c=V[n][0],d=V[n][1];
    llong k = (d-b)/(a-c);

    // cout << a  << " " << b <<" " << c<<" " << d <<" "<< "e";

    cout << V[n-1][0]*k + V[n-1][1] << endl;
    REP(i,n-1){
        cout << V[i][0]*k + V[i][1] << endl;
    }

    return 0;
}
