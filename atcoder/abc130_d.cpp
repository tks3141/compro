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
	llong N,K;
    cin >> N >> K;

    LV a(N);
    REP(i,N){
        cin >> a[i];
    }
    llong ans,now;
    now = ans = 0;
    int j=0;
    REP(i,N){
        while(j<N+1){
            if(now>=K){
                ans+=N-j+1;
                // cout << N-j+1 << endl;
                break;
            }else{
                now += a[j];
                j++;
            }
        }
        now-=a[i];
    }

    cout << ans << endl;
    return 0;
}
