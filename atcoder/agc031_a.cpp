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

// bool gousei(llong *x,llong *y){
//     if(*x<*y){
//         *y=x+y
//     }
// }

int main() {
	llong N;
    cin >> N;
    string S;
    cin >> S;

    llong ans=0;
    LV char_v(26,0);
    REP(i,N){
        char_v[S[i]-'a']++;
    }
    llong t = 1;
    REP(i,26){
        t =t*(1+char_v[i]) % MOD;
    }
    ans=(ans+t)%MOD;



    cout << ans-1 << endl;





}
