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
	int n,k; cin >> n >> k;
    int d,ans=0;
    vector<int> b(n,0);
    REP(i,k){
        cin >> d;
        vector<int> A(d);
        REP(j,d){
            cin >> A[j];
        }
        REP(j,d){
            b[A[j]-1]++;
        }
    }
    REP(i,n){
        if(b[i]==0)ans++;
    }
    cout << ans << endl;
    

    return 0;
}
