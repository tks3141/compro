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
	llong N;
    cin >> N;
    LV C(N),V(N);
    REP(i,N){
        cin >> V[i];
    }
    REP(i,N){
        cin >> C[i];
    }
    LV CP(N);
    REP(i,N){
        CP[i]=V[i]-C[i];
    }
    sort(CP.begin(),CP.end());
    llong ans =0;
    REP(i,N){
        if(CP[i]>0){
            ans+=CP[i];
        }
    }




    cout << ans << endl;






}
